




//importers
#pragma once
#include"gl.h"

//funcdefs
typedef struct position{
    GLfloat x;
    GLfloat y;
    GLfloat z;
}pos;
typedef struct direction{
    GLfloat x;
    GLfloat y;
    GLfloat z;
}dir;
typedef struct camera{
    pos cam_pos;
    dir cam_dif;
}cam;


