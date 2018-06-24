#ifndef HITIME_OPTIONS_H
#define HITIME_OPTIONS_H

#include <unistd.h>
#include <boost/program_options.hpp>

class Options {

    public:
        double intensity_ratio; //!< Intensity ratio between lo and hi peaks.
        double rt_width; //!< Retention time FWHM in scans.
        double rt_sigma; //!< Boundary for RT width in SDs.
        double ppm; //!< MZ tolerance in PPM.
        double mz_width; //!< MZ FWHM in PPM.
        double mz_sigma; //!< Boundary for MZ in SDs.
        double mz_delta; //!< MZ difference between peaks.
        double min_sample; //!< Minimum number of points required in each region.
        std::string in_file; //!< Path to input file.
        std::string out_file; //!< Path to output file.
        bool debug;
        int num_threads;

        Options(int argc, char *argv[]);
};

#endif
