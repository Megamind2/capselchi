/*
 * Body.h
 *
 *  Created on: May 30, 2012
 *      Author: koen
 */

#ifndef BODY_H_
#define BODY_H_

#include <Box2D/Box2D.h>
#include <list>
#include "Fixture.h"

using namespace std;

namespace capselchi {

class Fixture;

class Body {
	public:
		Body();
		virtual ~Body();


	private:
		b2Body* body;
		list<Fixture*> fixtures;
		b2Color color;


};

}

#endif /* BODY_H_ */
