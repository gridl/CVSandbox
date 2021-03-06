/*
    Image processing tools plug-ins of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#pragma once
#ifndef CVS_PUT_TEXT_PLUGIN_HPP
#define CVS_PUT_TEXT_PLUGIN_HPP

#include <iplugintypescpp.hpp>
#include <string>

class PutTextPlugin : public IImageProcessingFilterPlugin
{
public:
    PutTextPlugin( );

    // IPluginBase interface
    void Dispose( );

    XErrorCode GetProperty( int32_t id, xvariant* value ) const;
    XErrorCode SetProperty( int32_t id, const xvariant* value );

    // IImageProcessingFilterPlugin interface
    bool CanProcessInPlace( );
    XErrorCode GetPixelFormatTranslations( XPixelFormat* inputFormats, XPixelFormat* outputFormats, int32_t* count );
    XErrorCode ProcessImage( const ximage* src, ximage** dst );
    XErrorCode ProcessImageInPlace( ximage* src );

private:
    static const PropertyDescriptor** propertiesDescription;
    static const XPixelFormat supportedFormats[];
    std::string line1;
    std::string line2;
    std::string line3;
    std::string line4;
    std::string line5;
    uint8_t     alignment;
    bool        alignToCorners;
    xpoint      coordinates;
    xargb       textColor;
    xargb       bgColor;
};

#endif // CVS_PUT_TEXT_PLUGIN_HPP
