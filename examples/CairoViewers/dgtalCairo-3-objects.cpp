/**
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

/**
 * @file DGtalCairo-1-points.cpp
 * @ingroup examples/3dViewer
 * @author Bertrand Kerautret (\c kerautre@loria.fr )
 * LORIA (CNRS, UMR 7503), University of Nancy, France
 *
 * @date 2011/19/03
 *
 * Simple example of class DGtalCairo.
 *
 * This file is part of the DGtal library.
 */

///////////////////////////////////////////////////////////////////////////////
#include <iostream>
//#include <QtGui/qapplication.h>
#include "DGtal/io-viewers/CairoViewers/DGtalCairo.h"
#include "DGtal/base/Common.h"
#include "DGtal/helpers/StdDefs.h"
#include "DGtal/helpers/Shapes.h"

///////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace DGtal;
using namespace Z3i;


///////////////////////////////////////////////////////////////////////////////
// Standard services - public :

int main( int argc, char** argv )
{

 //QApplication application(argc,argv);

 DGtalCairo viewer;
 //viewer.show();

 Point p1( 0, 0, 0 );
 Point p2( 10, 10 , 10 );
 Domain domain( p1, p2 );
 
 
 DigitalSet shape_set( domain );
 Shapes<Domain>::addNorm1Ball( shape_set, Point( 5, 5, 5 ), 2 );
 Shapes<Domain>::addNorm2Ball( shape_set, Point( 3, 3, 3 ), 2 );
 viewer <<  CustomColors3DCairo(QColor(250, 200,0, 100),QColor(250, 200,0, 25));
 viewer << shape_set;  

 Object6_18 shape( dt6_18, shape_set );
 viewer << SetMode3DCairo( shape.styleName(), "DrawAdjacencies" );
 viewer << shape;

 Object18_6 shape2( dt18_6, shape_set );
 viewer << SetMode3DCairo( shape2.styleName(), "DrawAdjacencies" );
 //viewer << shape2;
 
 //viewer<< DGtalCairo::updateDisplay;
 viewer.setCameraPosition(4.000000, 4.000000, 17.578199);
 viewer.setCameraDirection(0.000000, 0.000000, -1.000000);
 viewer.setCameraUpVector(0.000000, 1.000000, 0.000000);
 viewer.saveCairo("dgtalCairo-3-objects.png", DGtalCairo::CairoPNG, 1200, 800);
 
 //return application.exec();
}
//                                                                           //
///////////////////////////////////////////////////////////////////////////////




