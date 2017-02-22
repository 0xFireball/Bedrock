//
//  OpenGL.h
//  Bedrock
//
//  Created by Quinn on 1/12/14.
//  Copyright (c) 2014 Hexahedron Games. All rights reserved.
//

#pragma once

#ifdef __APPLE__
#include </System/Library/Frameworks/OpenGL.framework/Headers/gl.h>
#include </System/Library/Frameworks/OpenGL.framework/Headers/glu.h>
#endif
#ifdef __linux__
//#include <GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glx.h>
//#include <GL/glxext.h>
#define GL_GLEXT_PROTOTYPES
#include <SDL_opengl.h>
#include <SDL_opengl_glext.h>
#endif