

////////////////////// TP Mod3D Realisation d'une mosquer Belhajd Mohamed et Kebiri issame dine /////////////////////////


#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
static int slices = 16;
static int stacks = 16;
bool START = false;
static void m(int width, int height)
{
    const float ar = (float) width / (float) height;
    glMatrixMode(GL_PROJECTION);
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 1000.0);
    glMatrixMode(GL_MODELVIEW);

}



void moh(){
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    double a = t*90.0;

     GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    
/// babe 

glColor3d(0,250,250);
 glPushMatrix();
        glTranslated(0,0.9,-12);
        glRotated(90,1,0,0);
        glScaled(0.8,0.1,1);
        glutSolidCube(3);
    glPopMatrix();





/// soum3a mahniaa


     glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(0.1,3.5,0.5);
        glRotated(0,0,1,0);
        glScaled(0.1,0.1,0.9);
        glutSolidTorus(12,10,100,50);
    glPopMatrix();


/// la courp

glColor3d(0.45,0.45,0.45);
 glPushMatrix();
        glTranslated(-0.2,1.5,0);
        glRotated(90,0,1,0);
        glScaled(8,2,4);
        glutSolidCube(3);
    glPopMatrix();



/// carre kouba

glColor3d(0,1,1);
 glPushMatrix();
        glTranslated(-0.0,4.3,-6.5);
        glRotated(90,0,1,0);
        glScaled(2.7,1,2.7);
        glutSolidCube(3);
    glPopMatrix();

/// soum3a
glColor3d(0.45,0.45,0.45);
 glPushMatrix();
         glTranslated(-4.7,6,10.5);
        glRotated(90,0,1,0);
        glScaled(1,5,1);
        glutSolidCube(3);

    glPopMatrix();

/// cube soum3a 

     glColor3d(1,1,0);
 glPushMatrix();
         glTranslated(-4.7,11.5,10.5);
        glRotated(90,0,1,0);
        glScaled(1.05,1,1.05);
        glutSolidCube(3);

 glPopMatrix();
/// soum3a saghira 

glColor3d(0,250,250);
 glPushMatrix();
         glTranslated(-4.7,10,10.5);
        glRotated(90,0,1,0);
        glScaled(0.7,5,0.7);
        glutSolidCube(3);

    glPopMatrix();



/// kouba kabira
 glColor3d(1,1,1);
  glPushMatrix();
        glTranslated(0,4.5,-6.5);
        glRotated(90,1,0,0);
        glRotated(1,0,0,1);
        glutSolidSphere(4,slices,stacks);


    glPopMatrix();



 glColor3d(1,1,0);
 glPushMatrix();
         glTranslated(0,8.5,-6.5);
        glRotated(90,0,1,0);
        glScaled(0.04,1,0.04);
        glutSolidCube(3);

    glPopMatrix();


       glColor3d(250,250,250);
  glPushMatrix();
         glTranslated(0,8.8,-6.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(0.21,slices,stacks);
    glPopMatrix();


      glColor3d(250,250,250);
  glPushMatrix();
        glTranslated(0,9.3,-6.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(0.16,slices,stacks);
    glPopMatrix();


    glColor3d(250,250,250);
  glPushMatrix();
         glTranslated(0,9.7,-6.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(0.14,slices,stacks);
    glPopMatrix();

glPushMatrix();
        glTranslated(0,10.1,-6.5);
        glRotated(0,1,0,0);
        glRotated(a,0,0,1);
        glutSolidTorus(0.05,0.2,slices,stacks);
    glPopMatrix();



/// kouba kabira

   glColor3d(250,250,250);
  glPushMatrix();
        glTranslated(-4.7,17.5,10.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(1,slices,stacks);
    glPopMatrix();


    glColor3d(250,250,250);
  glPushMatrix();
        glTranslated(-4.7,18.8,10.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(0.18,slices,stacks);
    glPopMatrix();


      glColor3d(250,250,250);
  glPushMatrix();
        glTranslated(-4.7,19.2,10.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(0.14,slices,stacks);
    glPopMatrix();


    glColor3d(250,250,250);
  glPushMatrix();
        glTranslated(-4.7,19.5,10.5);
        glRotated(90,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(0.12,slices,stacks);
    glPopMatrix();



    /// pilier de porte 

    glColor3d(1,1,0);
 glPushMatrix();
        glTranslated(-4.7,19.1,10.5);
        glRotated(90,0,1,0);
        glScaled(0.04,0.5,0.04);
        glutSolidCube(3);

    glPopMatrix();



     glPushMatrix();
        glTranslated(-4.7,20,10.5);
        glRotated(0,1,0,0);
        glRotated(a,0,0,1);
        glutSolidTorus(0.05,0.2,slices,stacks);
    glPopMatrix();

    /// casquette


glColor3d(0.45,0.45,0.45);
 glPushMatrix();
         glTranslated(-0.2,4.3,-12);
        glRotated(90,0,1,0);
        glScaled(1,0.1,4);
        glutSolidCube(3);
    glPopMatrix();

    /// escalier
glColor3d(0,0,0);
 glPushMatrix();
         glTranslated(-0.2,-1.4,-15);
        glRotated(90,0,1,0);
        glScaled(2,0.13,4);
        glutSolidCube(3);
    glPopMatrix();

glColor3d(0,0,1);
 glPushMatrix();
         glTranslated(-0.2,-1.2,-14.5);
        glRotated(90,0,1,0);
        glScaled(1.6,0.13,3.6);
        glutSolidCube(3);
    glPopMatrix();


    glColor3d(0,1,0);
 glPushMatrix();
         glTranslated(-0.2,-0.8,-13.9);
        glRotated(90,0,1,0);
        glScaled(1.2,0.13,3.2);
        glutSolidCube(3);

    glPopMatrix();




/// potou

    glColor3d(1,1,1);
 glPushMatrix();
         glTranslated(5,1.5,-13);
        glRotated(90,0,1,0);
        glScaled(0.1,1.9,0.1);
        glutSolidCube(3);

    glPopMatrix();


     glColor3d(1,1,1);
 glPushMatrix();
         glTranslated(-5.4,1.5,-13);
        glRotated(90,0,1,0);
        glScaled(0.1,1.9,0.1);
        glutSolidCube(3);

    glPopMatrix();


/// fenetre
    glColor3d(12,250,0);
 glPushMatrix();
        glTranslated(6,1.7,7);
        glRotated(90,1,0,0);
        glScaled(0.1,1,1);
        glutSolidCube(3);
    glPopMatrix();


    glColor3d(12,250,0);
 glPushMatrix();
        glTranslated(6,1.7,0);
        glRotated(90,1,0,0);
        glScaled(0.1,1,1);
        glutSolidCube(3);
    glPopMatrix();


     glColor3d(12,250,0);
 glPushMatrix();
        glTranslated(6,1.7,-7);
        glRotated(90,1,0,0);
        glScaled(0.1,1,1);
        glutSolidCube(3);
    glPopMatrix();





     glColor3d(12,250,0);
 glPushMatrix();
        glTranslated(-6.2,1.7,7);
        glRotated(90,1,0,0);
        glScaled(0.1,1,1);
        glutSolidCube(3);
    glPopMatrix();


    glColor3d(12,250,0);
 glPushMatrix();
        glTranslated(-6.2,1.7,0);
        glRotated(90,1,0,0);
        glScaled(0.1,1,1);
        glutSolidCube(3);
    glPopMatrix();


     glColor3d(12,250,0);
 glPushMatrix();
        glTranslated(-6.2,1.7,-7);
        glRotated(90,1,0,0);
        glScaled(0.1,1,1);
        glutSolidCube(3);
    glPopMatrix();

/// gazon

glColor3d(0,128,0);
 glPushMatrix();
         glTranslated(0,-3,0);
        glRotated(90,0,1,0);
        glScaled(20,0.1,20);
        glutSolidCube(3);
    glPopMatrix();



}


static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    double a = t*50.00;
    double aa=a;



    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();

    gluLookAt(  15, 5, -0.1,
                0, 4, 0,
                0, 1.0f, 0.0f);
    if(START){

        glPushMatrix();
            glTranslated(0,0,0);

            glRotated(a,0,1,0);

        glPopMatrix();


        int mod,number=0;

        float tmp=0;
        while(number){
            mod=number%0;

            number/=10;
            tmp+=0;
        }
    }
    else{

/// zoooooooooooooooooooooom
       glPushMatrix();
            glTranslated(-100,-10,0);
            glRotated(aa,0,1,0);
            glScaled(1.5,1.5,1.5);
            moh();
        glPopMatrix();

    }



    glutSwapBuffers();
}




static void idle(void)
{
    glutPostRedisplay();
}



int main(int argc, char *argv[])
{
    glutInitWindowSize(1350,695);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutCreateWindow("GLUT Shapes");
    glutReshapeFunc(m);
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glClearColor(0,0,0,0);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();

    return 0;
}

