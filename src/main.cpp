#include <GL/freeglut.h>
#include "../include/mainloop.hpp"

void drawGrid(){

   glColorMaterial ( GL_FRONT_AND_BACK, GL_EMISSION ) ;

   glBegin(GL_LINES);
   glColor3f(1.0,0.0,0.0);

   for(int i = 0; i < 11; ++i){
      for(int j = 0; j < 11; ++j){
         glVertex3f(0-5,0,j-5);
         glVertex3f(10-5,0,j-5);
         glVertex3f(i-5,0,0-5);
         glVertex3f(i-5,0,10-5);
      }
   }

   glEnd();
}

void drawBars(){
   glTranslatef(-3.0,1.0,-3.0);
   glScalef(1.0,2.0,1.0);
   glutSolidCube(1);
   glScalef(1.0,2.0,1.0);
   glTranslatef(2.0,0.25,0.0);
   glutSolidCube(1);
   glScalef(1.0,0.225,1.0);
   glTranslatef(1.0,-2.0,3.0);
}

void init (void) {
   glEnable (GL_DEPTH_TEST);
   glEnable (GL_LIGHTING);
   glEnable (GL_LIGHT0);
   glEnable ( GL_COLOR_MATERIAL ) ;
}

int main (int argc, char **argv) {
   glutInit (&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("A basic OpenGL Window");
   init ();
   glutDisplayFunc (display);
   glutIdleFunc (display);
   glutReshapeFunc (reshape);
   glutMainLoop ();
   return 0;
}


