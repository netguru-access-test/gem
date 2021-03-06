 /* ------------------------------------------------------------------
  * GEM - Graphics Environment for Multimedia
  *
  *  Copyright (c) 2002-2011 IOhannes m zmölnig. forum::für::umläute. IEM. zmoelnig@iem.at
  *	zmoelnig@iem.kug.ac.at
  *  For information on usage and redistribution, and for a DISCLAIMER
  *  OF ALL WARRANTIES, see the file, "GEM.LICENSE.TERMS"
  *
  *  this file has been generated...
  * ------------------------------------------------------------------
  */

#ifndef _INCLUDE__GEM_OPENGL_GEMGLNEWLIST_H_
#define _INCLUDE__GEM_OPENGL_GEMGLNEWLIST_H_

#include "Base/GemGLBase.h"

/*
 CLASS
	GEMglNewList
 KEYWORDS
	openGL	0
 DESCRIPTION
	wrapper for the openGL-function
	"glNewList( GLenum mode)"
 */

class GEM_EXTERN GEMglNewList : public GemGLBase
{
	CPPEXTERN_HEADER(GEMglNewList, GemGLBase);

	public:
	  // Constructor
  GEMglNewList (t_float, t_float);	// CON

	protected:
	  // Destructor
	  virtual ~GEMglNewList ();
	  // Do the rendering
	  virtual void	render (GemState *state);

	// variables
	  GLuint	list;		// VAR
	  virtual void	listMess(t_float);	// FUN
	  GLenum	mode;		// VAR
	  virtual void	modeMess(t_float);	// FUN


	private:

	// we need some inlets
	  t_inlet *m_inlet[2];

	// static member functions
	  static void	 modeMessCallback (void*, t_float);
	  static void	 listMessCallback (void*, t_float);
};
#endif // for header file
