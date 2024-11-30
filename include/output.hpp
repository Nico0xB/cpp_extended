/*
    cpp_extended Standard Output Header
    Copyright (C) 2024  Nico0xB

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef CPPX_OUTPUT_HPP /* Header Guard */
#define CPPX_OUTPUT_HPP

#pragma once

#include <iostream> /* Standard Ostream Objects */
#include "macros.hpp" /* Macros */

CPPX_NAMESPACE_STDX_START

class ostream {
    private:
        std::ostream out; 
};

CPPX_NAMESPACE_STDX_END

#endif /* CPPX_OUTPUT_HPP */