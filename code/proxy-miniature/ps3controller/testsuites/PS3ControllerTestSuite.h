/**
 * ps3controller - Using a PS3 controller to accelerate, brake, and steer a miniature vehicle.
 * Copyright (C) 2017 Chalmers Revere
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef PS3CONTROLLER_TESTSUITE_H
#define PS3CONTROLLER_TESTSUITE_H

#include "cxxtest/TestSuite.h"

// Include local header files.
#include "../include/Ps3Controller.h"

using namespace std;
using namespace opendlv::proxy::miniature;

class Ps3ControllerTest : public CxxTest::TestSuite {
   public:
    void setUp() {}

    void tearDown() {}

    void testApplication() {
        TS_ASSERT(true);
    }
};

#endif /*PS3CONTROLLER_TESTSUITE_H*/
