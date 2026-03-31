


//importers
#include"window.h"
//funcs

int mid_bus(void *hi){
    extern int e_runner;
    extern SDL_Mutex *xyrot_s;
    extern GLfloat x,y,rot_x,rot_y;
    extern GLuint vbo;
    extern float vertices[27];
    extern GLfloat x2,y2,rot_x2,rot_y2;
    extern GLuint vbo2;
    extern float vertices2[27];
    while(e_runner){
    delay(10);
    SDL_LockMutex(xyrot_s);
    x=x2;y=y2;rot_x=rot_x2;rot_y=rot_y2;
    vbo=vbo2;
    //memcpy(vertices2, vertices,27);
    SDL_UnlockMutex(xyrot_s);
    }

}

