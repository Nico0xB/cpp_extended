/*
    cpp_extended Standard Output Header
    Copyright (C) 2024 Nico0xB
*/

#ifndef CPPX_OUTPUT_HPP /* Header guard */
#define CPPX_OUTPUT_HPP

#pragma once

#include <iostream> /* Standard ostream objects */
#include "macros.hpp" /* Macros */

class out_stream {
    private:
        std::ostream *data;
    public:
        /* class constructor to initialize data */
        explicit out_stream(std::ostream &os = std::cout) : data(&os) {};

        /* operator<< overload to support out_stream class */
        template <class T>
        friend out_stream &operator<<(out_stream &os, const T &var) {
            *(os.data) << var;
            return os;
        };

        /* operator<< overload to support ostream manipulators(like std::endl) with out_stream */
        friend out_stream &operator<<(out_stream &os, std::ostream& (*manip) (std::ostream&)) {
            *(os.data) << manip;
            return os;
        };

        /* This function simply calls std::flush */
        out_stream &flush() {
            *data << std::flush;
            return *this;
        };

        /* This function adds the newline character('\n') to the stream */
        out_stream &newl() {
            *data << '\n';
            return *this;
        };

        /* This function adds the newline character('\n') to the stream and flushes it. Acts the same as std::endl */
        out_stream &endl() {
            *data << '\n' << std::flush;
            return *this;
        };
        
};

#endif /* CPPX_OUTPUT_HPP */