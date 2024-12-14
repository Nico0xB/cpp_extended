/*
cpp_extended Standard Output Header
Copyright (c) 2024 Nico0xB

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef CPPX_OUTPUT_HPP // Header Guard
#define CPPX_OUTPUT_HPP

#pragma once

#include <iostream> // Standard stream objects (std::ostream, std::basic_ostream...)

namespace cppx {
    class ostream {
        private:
            std::ostream *data; // Pointer to actual ostream
        public:
            ostream() : data(nullptr) {}; // Initializes the ostream pointer(*data) to nullptr
            // Assignment operator 
            cppx::ostream &operator=(std::ostream& std_os) { 
                this->data = &std_os; 
                return *this;
            }
            // Extracting operator(<<) overload
            template<class T>
            cppx::ostream &operator<<(T &var) {
                if (var) {
                    *(this->data) << var;
                };
                return *this;
            }
    };

    class wostream {
        private:
            std::wostream *data; // Pointer to actual ostream
        public:
            wostream() : data(nullptr) {}; // Initializes the ostream pointer(*data) to nullptr
            // Assignment operator 
            cppx::wostream &operator=(std::wostream& std_os) { 
                this->data = &std_os; 
                return *this;
            }
            // Extracting operator(<<) overload
            template<class T>
            cppx::wostream &operator<<(T &var) {
                if (var) {
                    *(this->data) << var;
                };
                return *this;
            }
    };

    cppx::ostream out;
    cppx::wostream wout;


}; // namespace cppx

#endif // CPPX_OUTPUT_HPP