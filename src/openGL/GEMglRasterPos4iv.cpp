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

#include "GEMglRasterPos4iv.h"

CPPEXTERN_NEW_WITH_FOUR_ARGS ( GEMglRasterPos4iv , t_floatarg, A_DEFFLOAT, t_floatarg, A_DEFFLOAT, t_floatarg, A_DEFFLOAT, t_floatarg, A_DEFFLOAT);

/////////////////////////////////////////////////////////
//
// GEMglRasterPos4iv
//
/////////////////////////////////////////////////////////
// Constructor
//
GEMglRasterPos4iv :: GEMglRasterPos4iv	(t_floatarg arg0, t_floatarg arg1, t_floatarg arg2, t_floatarg arg3) {
vMess(arg0, arg1, arg2, arg3);
	m_inlet = inlet_new(this->x_obj, &this->x_obj->ob_pd, &s_float, gensym("v"));
}
/////////////////////////////////////////////////////////
// Destructor
//
GEMglRasterPos4iv :: ~GEMglRasterPos4iv () {
	inlet_free(m_inlet);
}

/////////////////////////////////////////////////////////
// Render
//
void GEMglRasterPos4iv :: render(GemState *state) {
	glRasterPos4iv (v);
}

/////////////////////////////////////////////////////////
// variable
//
void GEMglRasterPos4iv :: vMess (t_float arg0, t_float arg1, t_float arg2, t_float arg3) {	// FUN
	v[0]=static_cast<GLint>(arg0);
	v[1]=static_cast<GLint>(arg1);
	v[2]=static_cast<GLint>(arg2);
	v[3]=static_cast<GLint>(arg3);
	setModified();
}

/////////////////////////////////////////////////////////
// static member functions
//

void GEMglRasterPos4iv :: obj_setupCallback(t_class *classPtr) {
	 class_addmethod(classPtr, reinterpret_cast<t_method>(&GEMglRasterPos4iv::vMessCallback),  	gensym("v"), A_DEFFLOAT, A_DEFFLOAT, A_DEFFLOAT, A_DEFFLOAT, A_NULL);
}

void GEMglRasterPos4iv :: vMessCallback (void* data, t_float arg0, t_float arg1, t_float arg2, t_float arg3) {
	GetMyClass(data)->vMess ( arg0, arg1, arg2, arg3);
}
