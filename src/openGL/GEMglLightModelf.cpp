////////////////////////////////////////////////////////
//
// GEM - Graphics Environment for Multimedia
//
// Implementation file
//
// Copyright (c) 2002-2011 IOhannes m zmölnig. forum::für::umläute. IEM. zmoelnig@iem.at
//	zmoelnig@iem.kug.ac.at
//  For information on usage and redistribution, and for a DISCLAIMER
//  *  OF ALL WARRANTIES, see the file, "GEM.LICENSE.TERMS"
//
//  this file has been generated...
////////////////////////////////////////////////////////

#include "GEMglLightModelf.h"

CPPEXTERN_NEW_WITH_TWO_ARGS ( GEMglLightModelf , t_floatarg, A_DEFFLOAT, t_floatarg, A_DEFFLOAT);

/////////////////////////////////////////////////////////
//
// GEMglViewport
//
/////////////////////////////////////////////////////////
// Constructor
//
GEMglLightModelf :: GEMglLightModelf	(t_floatarg arg0, t_floatarg arg1) :
		pname(static_cast<GLenum>(arg0)),
		param(static_cast<GLfloat>(arg1))
{
	m_inlet[0] = inlet_new(this->x_obj, &this->x_obj->ob_pd, &s_float, gensym("pname"));
	m_inlet[1] = inlet_new(this->x_obj, &this->x_obj->ob_pd, &s_float, gensym("param"));
}
/////////////////////////////////////////////////////////
// Destructor
//
GEMglLightModelf :: ~GEMglLightModelf () {
inlet_free(m_inlet[0]);
inlet_free(m_inlet[1]);
}

/////////////////////////////////////////////////////////
// Render
//
void GEMglLightModelf :: render(GemState *state) {
	glLightModelf (pname, param);
}

/////////////////////////////////////////////////////////
// Variables
//
void GEMglLightModelf :: pnameMess (t_float arg1) {	// FUN
	pname = static_cast<GLenum>(arg1);
	setModified();
}

void GEMglLightModelf :: paramMess (t_float arg1) {	// FUN
	param = static_cast<GLfloat>(arg1);
	setModified();
}


/////////////////////////////////////////////////////////
// static member functions
//

void GEMglLightModelf :: obj_setupCallback(t_class *classPtr) {
	 class_addmethod(classPtr, reinterpret_cast<t_method>(&GEMglLightModelf::pnameMessCallback),  	gensym("pname"), A_DEFFLOAT, A_NULL);
	 class_addmethod(classPtr, reinterpret_cast<t_method>(&GEMglLightModelf::paramMessCallback),  	gensym("param"), A_DEFFLOAT, A_NULL);
};

void GEMglLightModelf :: pnameMessCallback (void* data, t_float arg0){
	GetMyClass(data)->pnameMess ( static_cast<t_float>(arg0));
}
void GEMglLightModelf :: paramMessCallback (void* data, t_float arg0){
	GetMyClass(data)->paramMess ( static_cast<t_float>(arg0));
}
