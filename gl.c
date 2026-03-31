


//importers//
#include<GL/gl.h>
#include<GL/glu.h>

//funcs//
void MatrixMode(GLenum mode){
glMatrixMode(mode);
glLoadIdentity();
}
void Draw_Triangle(GLfloat C1r,GLfloat C1b,GLfloat C1y,GLfloat V1x,GLfloat V1y,GLfloat C2r,GLfloat C2b,GLfloat C2y,GLfloat V2x,GLfloat V2y,GLfloat C3r,GLfloat C3b,GLfloat C3y,GLfloat V3x,GLfloat V3y){
glBegin(GL_TRIANGLES);
            glColor3f(C1r,C1b,C1y); glVertex2f(V1x,V1y);
            glColor3f(C2r,C2b,C2y); glVertex2f(V2x,V2y);
            glColor3f(C3r,C3b,C3y); glVertex2f(V3x,V3y);
glEnd();
}
//code here
