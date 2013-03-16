/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2011 Artem Pavlenko
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#ifndef MAPNIK_CHAR_INFO_HPP
#define MAPNIK_CHAR_INFO_HPP

#include <boost/shared_ptr.hpp>
#include <mapnik/text/char_properties_ptr.hpp>

namespace mapnik {

class char_info
{
public:
    char_info(unsigned c_, double width_, double ymax_, double ymin_, double line_height_)
        :  c(c_),
           width(width_),
           line_height(line_height_),
           ymin(ymin_),
           ymax(ymax_),
           avg_height(ymax - ymin),
           format()
    {
    }

    char_info()
        :  c(0),
           width(0),
           line_height(0),
           ymin(0),
           ymax(0),
           avg_height(0),
           format()
    {
    }

    double height() const { return ymax-ymin; }

    unsigned c;
    double width;
    double line_height;
    double ymin;
    double ymax;
    double avg_height;
    char_properties_ptr format;

};
}

#endif //MAPNIK_CHAR_INFO_HPP
