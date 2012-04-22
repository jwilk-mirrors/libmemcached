/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  libtest
 *
 *  Copyright (C) 2011 Data Differential, http://datadifferential.com/
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 3 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */


#pragma once

#include <cstring>
#include <iostream>
#include <ostream>
#include <sstream>
#include <vector>

namespace libtest {

typedef std::vector<char*> vchar_ptr_t;
typedef std::vector<char> vchar_t;

void make_vector(libtest::vchar_t& arg, const char *str, size_t length);

namespace vchar {

int compare(libtest::vchar_t& arg, const char *str, size_t length);
void make(libtest::vchar_t& arg);
void make(libtest::vchar_t& arg, size_t length);

} // namespace vchar

#define vchar_param(__arg) (&__arg[0]), (__arg.size())

std::ostream& operator<<(std::ostream& output, const libtest::vchar_t& arg);

} // namespace libtest
