////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2023 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_KEYSYMTOUNICODEMAPPING_HPP
#define SFML_KEYSYMTOUNICODEMAPPING_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Config.hpp> // sf::Uint32
#include <X11/X.h> // KeySym

namespace sf
{
namespace priv
{

////////////////////////////////////////////////////////////
/// \brief Converts a KeySym to UTF-32
///
/// This code was autogenerated from the following table:
/// https://www.cl.cam.ac.uk/~mgk25/ucs/keysyms.txt
///
/// The generated table was edited so that dead keys are mapped to
/// non-combining characters instead of combining diacritical marks
/// because is it more suitable to describe those keys in user interfaces.
///
/// \param keysym keysym to be converted
///
/// \return corresponding UTF-32
///
////////////////////////////////////////////////////////////
char32_t keysymToUnicode(KeySym keysym);

} // namespace priv

} // namespace sf

#endif // SFML_KEYSYMTOUNICODEMAPPING_HPP
