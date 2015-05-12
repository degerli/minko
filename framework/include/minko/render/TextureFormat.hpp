/*
Copyright (c) 2014 Aerys

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include "minko/Common.hpp"

namespace minko
{
    namespace render
    {
        enum class TextureFormat
        {
            RGB,
            RGBA,

            RGB_DXT1,
            RGBA_DXT1,
            RGBA_DXT3,
            RGBA_DXT5,

            RGB_ETC1,
            RGBA_ETC1,

            RGB_PVRTC1_2BPP,
            RGB_PVRTC1_4BPP,
            RGBA_PVRTC1_2BPP,
            RGBA_PVRTC1_4BPP,

            RGBA_PVRTC2_2BPP,
            RGBA_PVRTC2_4BPP,

            RGB_ATITC,
            RGBA_ATITC,

            // supported from OES 3.0
            RGB_ETC2,
            RGBA_ETC2
        };
    }

    template<>
    struct Hash<render::TextureFormat>
    {
        inline
        size_t
        operator()(const minko::render::TextureFormat& x) const
        {
            return std::hash<unsigned int>()(static_cast<unsigned int>(x));
        }
    };

}
