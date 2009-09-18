/*  This file is part of the Vc library.

    Copyright (C) 2009 Matthias Kretz <kretz@kde.org>

    Vc is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    Vc is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with Vc.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef VC_SSE_CONST_H
#define VC_SSE_CONST_H

#include "macros.h"

namespace Vc
{
namespace SSE
{
    template<typename T> class Vector;
    template<typename T> struct c_sin
    {
        typedef Vector<T> V;
        enum { Size = 16 / sizeof(T) };
        static const T _data[Size * 8];

        static V _1_2pi()  CONST;
        static V _2pi()    CONST;
        static V _pi_2()   CONST;
        static V _pi()     CONST;

        static V _1_3fac() CONST;
        static V _1_5fac() CONST;
        static V _1_7fac() CONST;
        static V _1_9fac() CONST;
    } ALIGN(64);
} // namespace SSE
} // namespace Vc

#include "undomacros.h"

#endif // VC_SSE_CONST_H
