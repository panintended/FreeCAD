/***************************************************************************
 *   Copyright (c) 2012 Jürgen Riegel <juergen.riegel@web.de>              *
 *   Copyright (c) 2015 Alexander Golubev (Fat-Zer) <fatzer2@gmail.com>    *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#ifndef GUI_ViewProviderPlane_H
#define GUI_ViewProviderPlane_H

#include "ViewProviderDatum.h"

class SoSwitch;
class SoAsciiText;

namespace Gui
{

class GuiExport ViewProviderPlane : public ViewProviderDatum
{
    PROPERTY_HEADER_WITH_OVERRIDE(Gui::ViewProviderPlane);
public:
    /// Constructor
    ViewProviderPlane();
    ~ViewProviderPlane() override;

    void attach (App::DocumentObject*) override;

    unsigned long getColor(const std::string& role) const;
    std::string getRole() const;
    std::string getLabelText(const std::string& role) const;
    void setLabelVisibility(bool val);

private:
    CoinPtr<SoSwitch> labelSwitch;
    CoinPtr<SoAsciiText> pLabel;
};

} //namespace Gui


#endif // GUI_ViewProviderPlane_H
