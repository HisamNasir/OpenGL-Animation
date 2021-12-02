#include<windows.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<fstream>
#include<iostream>
using namespace std;
#define PI 3.1416
GLint i, j, k;
GLfloat ax = 0, bx = 0, cx = 0, dx = 0, str = 500.0, mn = 500.0;
GLfloat sr = 0.0, sg = 0.749, sb = 1.0;
void Roundshape(GLdouble rad);
class House {
    GLfloat X_Pos, Y_Pos, Z_Pos, R_Color, G_Color, B_Color, X_Scale, Y_Scale, Z_Scale;
public:
    House() {
        X_Pos = Y_Pos = Z_Pos = 0;
        R_Color = 0.23;
        G_Color = 0.1;
        B_Color = 0.1;
        X_Scale = Y_Scale = Z_Scale = 1;
    }
    void Position(GLfloat x, GLfloat y, GLfloat z) {
        X_Pos = x;
        Y_Pos = y;
        Z_Pos = z;
    }
    void Scale(GLfloat x, GLfloat y, GLfloat z) {
        X_Scale = x;
        Y_Scale = y;
        Z_Scale = z;
    }
    void Color(GLfloat R, GLfloat G, GLfloat B) {
        R_Color = R;
        G_Color = G;
        B_Color = B;
    }
    void House_Draw() {
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glScalef(X_Scale, Y_Scale, Z_Scale);
        glBegin(GL_TRIANGLES);
        glColor3f(0.23f, 0.1f, 0.1f);
        glVertex2i(285, 105);
        glVertex2i(330, 130);
        glVertex2i(380, 105);
        glEnd();
        ///Home_Chat_Shadow
        glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2i(285, 105);
        glVertex2i(330, 120);
        glVertex2i(380, 105);
        glEnd();
        ///Home_Fence
        glBegin(GL_POLYGON);
        glColor4f(1.0f, 0.5f, 0.0f, 0.4f);
        glVertex2i(290, 70);
        glVertex2i(290, 104);
        glVertex2i(375, 104);
        glVertex2i(375, 70);
        glEnd();
        ///Home_Fence_Shadow
        glBegin(GL_POLYGON);
        glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
        glVertex2i(310, 70);
        glVertex2i(350, 104);
        glVertex2i(375, 104);
        glVertex2i(375, 70);
        glEnd();
        ///Home_Door
        glBegin(GL_POLYGON);
        glColor3f(0.1f, 0.0f, 0.0f);
        glVertex2i(330, 70);
        glVertex2i(330, 100);
        glVertex2i(350, 100);
        glVertex2i(350, 70);
        glEnd();
        ///Home_Window1
        glBegin(GL_POLYGON);
        glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
        glVertex2i(295, 75);
        glVertex2i(295, 90);
        glVertex2i(310, 90);
        glVertex2i(310, 75);
        glEnd();
        ///Home_Window2
        glBegin(GL_POLYGON);
        glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
        glVertex2i(312, 75);
        glVertex2i(312, 90);
        glVertex2i(327, 90);
        glVertex2i(327, 75);
        glEnd();
        ///Home_Window3
        glBegin(GL_POLYGON);
        glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
        glVertex2i(355, 75);
        glVertex2i(355, 90);
        glVertex2i(370, 90);
        glVertex2i(370, 75);
        glEnd();
        ///Home_Small_Chat
        glBegin(GL_POLYGON);
        glColor3f(0.23f, 0.1f, 0.1f);
        glVertex2i(250, 90);
        glVertex2i(290, 104);
        glVertex2i(290, 90);
        glEnd();
        ///Home_Small_Fence
        glBegin(GL_POLYGON);
        glColor3f(.555, .724, .930);
        glVertex2i(255, 70);
        glVertex2i(255, 90);
        glVertex2i(290, 90);
        glVertex2i(290, 70);
        glEnd();
        ///Home_Small_Door
        glBegin(GL_POLYGON);
        glColor3f(0.11, 0.23, 0.36);
        glVertex2i(260, 70);
        glVertex2i(260, 80);
        glVertex2i(285, 80);
        glVertex2i(285, 70);
        glEnd();
    }
    ~House() {


    }
};
class Dune {
    GLfloat X_Pos, Y_Pos, Z_Pos, R_Color, G_Color, B_Color, X_Scale, Y_Scale, Z_Scale;
public:
    Dune() {
        X_Pos = Y_Pos = Z_Pos = 0;
        R_Color = 0.23;
        G_Color = 0.1;
        B_Color = 0.1;
        X_Scale = Y_Scale = Z_Scale = 1;
    }
    void Position(GLfloat x, GLfloat y, GLfloat z) {
        X_Pos = x;
        Y_Pos = y;
        Z_Pos = z;
    }
    void Scale(GLfloat x, GLfloat y, GLfloat z) {
        X_Scale = x;
        Y_Scale = y;
        Z_Scale = z;
    }
    void Color(GLfloat R, GLfloat G, GLfloat B) {
        R_Color = R;
        G_Color = G;
        B_Color = B;
    }
    void Dune_Model_1_Draw() {
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glBegin(GL_POLYGON);
        glColor3f(0.1, 0.3, 0.0);
        glVertex2i(126, 71);
        glVertex2i(151, 81);
        glVertex2i(161, 91);
        glVertex2i(171, 91);
        glVertex2i(181, 101);
        glVertex2i(191, 106);
        glVertex2i(201, 109);
        glVertex2i(301, 111);
        glVertex2i(301, 71);
        glEnd();
    }
    void Dune_Model_2_Draw() {
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glColor3f(0.1, 0.3, 0.0);
        glPushMatrix();
        glTranslatef(430, 90, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(420, 87, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(410, 80, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(400, 80, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(390, 70, 0);
        Roundshape(30);
        glPopMatrix();
        ///Right_Part
        glPushMatrix();
        glTranslatef(445, 80, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(455, 75, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(465, 70, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(470, 65, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(480, 60, 0);
        Roundshape(30);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(485, 55, 0);
        Roundshape(20);
        glPopMatrix();
    }
    ~Dune() {


    }
};
class Mountain {
    GLfloat X_Pos, Y_Pos, Z_Pos, R_Color, G_Color, B_Color, X_Scale, Y_Scale, Z_Scale;
public:
    Mountain() {
        X_Pos = Y_Pos = Z_Pos = 0;
        R_Color = 0.23;
        G_Color = 0.1;
        B_Color = 0.1;
        X_Scale = Y_Scale = Z_Scale = 1;
    }
    void Position(GLfloat x, GLfloat y, GLfloat z) {
        X_Pos = x;
        Y_Pos = y;
        Z_Pos = z;
    }
    void Scale(GLfloat x, GLfloat y, GLfloat z) {
        X_Scale = x;
        Y_Scale = y;
        Z_Scale = z;
    }
    void Color(GLfloat R, GLfloat G, GLfloat B) {
        R_Color = R;
        G_Color = G;
        B_Color = B;
    }
    void Mountain_big() {
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        ///Mountain
        glBegin(GL_POLYGON);
        glColor3f(0.11, 0.23, 0.36);
        glVertex2i(70, 70);
        glVertex2i(200, 225);
        glVertex2i(330, 70);
        glEnd();
        ///Mountain_Snow
        glBegin(GL_POLYGON);
        glColor3f(1.25, 0.924, 0.930);
        glVertex2i(200, 225);
        glVertex2i(230, 190);
        glVertex2i(220, 180);
        glVertex2i(200, 190);
        glVertex2i(190, 180);
        glVertex2i(170, 190);
        glEnd();
    }
    void Mountain_small() {
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        ///Mountain_Small
        glBegin(GL_POLYGON);
        glColor3f(0.11, 0.23, 0.36);
        glVertex2i(250, 100);
        glVertex2i(310, 175);
        glVertex2i(370, 100);
        glEnd();
        ///Mountain_Small_Snow
        glBegin(GL_POLYGON);
        glColor3f(1.25, 0.924, 0.930);
        glVertex2i(290, 150);
        glVertex2i(310, 175);
        glVertex2i(330, 150);
        glVertex2i(325, 140);
        glVertex2i(310, 150);
        glVertex2i(300, 140);
        glEnd();
    }
    void Mountain_small2() {
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        ///Mountain_Small
        glBegin(GL_POLYGON);
        glColor3f(0.11, 0.23, 0.36);
        glVertex2i(250, 100);
        glVertex2i(310, 175);
        glVertex2i(370, 100);
        glEnd();
        ///Mountain_Small_Snow
        glBegin(GL_POLYGON);
        glColor3f(1.25, 0.924, 0.930);
        glVertex2i(290, 150);
        glVertex2i(310, 175);
        glVertex2i(330, 150);
        glVertex2i(325, 140);
        glVertex2i(310, 150);
        glVertex2i(300, 140);
        glEnd();
    }
    ~Mountain() {
    }
};
class Tree {
    GLfloat X_Pos, Y_Pos, Z_Pos, R_Color, G_Color, B_Color, X_Scale, Y_Scale, Z_Scale;
public:
    Tree() {
        X_Pos = Y_Pos = Z_Pos = 0;
        R_Color = 0.23;
        G_Color = 0.1;
        B_Color = 0.1;
        X_Scale = Y_Scale = Z_Scale = 1;
    }
    void Position(GLfloat x, GLfloat y, GLfloat z) {
        X_Pos = x;
        Y_Pos = y;
        Z_Pos = z;
    }
    void Scale(GLfloat x, GLfloat y, GLfloat z) {
        X_Scale = x;
        Y_Scale = y;
        Z_Scale = z;
    }
    void Color(GLfloat R, GLfloat G, GLfloat B) {
        R_Color = R;
        G_Color = G;
        B_Color = B;
    }
    void Plant_Model_1() {
        glColor3f(4.533, 1.93, 0.4);
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glPushMatrix();
        glTranslatef(110, 110, 0);
        Roundshape(15);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(110, 100, 0);
        Roundshape(15);
        glPopMatrix();
        glBegin(GL_POLYGON);
        glColor3f(0.38, 0.21, 0.26);
        glVertex2f(109, 70);
        glVertex2f(109, 90);
        glVertex2f(111, 90);
        glVertex2f(111, 70);
        glEnd();
    }
    void Plant_Model_2() {
        glColor3f(4.533, 1.93, 0.4);
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glPushMatrix();
        glTranslatef(130, 130, 0);
        Roundshape(5);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(125, 126, 0);
        Roundshape(5);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(135, 126, 0);
        Roundshape(5);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(130, 125, 0);
        Roundshape(5);
        glPopMatrix();
        glBegin(GL_POLYGON);
        glColor3f(0.38, 0.21, 0.26);
        glVertex2f(129, 110);
        glVertex2f(129, 124);
        glVertex2f(131, 124);
        glVertex2f(131, 110);
        glEnd();
    }
    void Plant_Model_3() {
        glColor3f(4.533, 1.93, 0.4);
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glBegin(GL_POLYGON);
        glVertex2f(125, 123);
        glVertex2f(133, 145);
        glVertex2f(141, 123);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.38, 0.21, 0.26);
        glVertex2f(132, 110);
        glVertex2f(132, 124);
        glVertex2f(134, 124);
        glVertex2f(134, 110);
        glEnd();
    }
    void field() {
        ///Field
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.2, 0.0);
        glVertex2i(0, 50);
        glVertex2i(0, 70);
        glVertex2i(1000, 70);
        glVertex2i(1000, 50);
        glEnd();
        ///Field_Shadow
        glBegin(GL_POLYGON);
        glColor3f(0.0, 0.1, 0.0);
        glVertex2i(0, 0);
        glVertex2i(0, 50);
        glVertex2i(1000, 50);
        glVertex2i(1000, 0);
        glEnd();
    }
    ~Tree() {
    }
};
class Witch {
    GLfloat X_Pos, Y_Pos, Z_Pos, R_Color, G_Color, B_Color, X_Scale, Y_Scale, Z_Scale;
public:
    Witch() {
        X_Pos = Y_Pos = Z_Pos = 0;
        R_Color = 0.23;
        G_Color = 0.1;
        B_Color = 0.1;
        X_Scale = Y_Scale = Z_Scale = 1;
    }
    void Position(GLfloat x, GLfloat y, GLfloat z) {
        X_Pos = x;
        Y_Pos = y;
        Z_Pos = z;
    }
    void Scale(GLfloat x, GLfloat y, GLfloat z) {
        X_Scale = x;
        Y_Scale = y;
        Z_Scale = z;
    }
    void Color(GLfloat R, GLfloat G, GLfloat B) {
        R_Color = R;
        G_Color = G;
        B_Color = B;
    }
    void Witch_model() {
        glColor3f(R_Color, G_Color, B_Color);
        glTranslatef(X_Pos, Y_Pos, Z_Pos);
        glPushMatrix();
        glTranslatef(300, 200, 0);
        glScalef(1, 1, 1);
        glBegin(GL_LINE_LOOP);
        glVertex2f(180, 20);
        glVertex2f(165, 20);
        glVertex2f(160, 35);
        glVertex2f(160, 20);
        glVertex2f(155, 20);
        glVertex2f(155, 40);
        glVertex2f(158, 45);
        glVertex2f(155, 42);
        glVertex2f(150, 45);
        glVertex2f(143, 55);
        glVertex2f(140, 60);
        glVertex2f(135, 65);
        glVertex2f(132, 75);
        glVertex2f(132, 80);
        glVertex2f(140, 85);
        glVertex2f(150, 95);
        glVertex2f(150, 100);
        glVertex2f(140, 95);
        glVertex2f(130, 92);
        glVertex2f(125, 85);
        glVertex2f(122, 85);
        glVertex2f(117, 75);
        glVertex2f(110, 70);
        glVertex2f(105, 65);
        glVertex2f(100, 70);
        glVertex2f(90, 75);
        glVertex2f(95, 78);
        glVertex2f(100, 98);
        glVertex2f(105, 100);
        glVertex2f(110, 110);
        glVertex2f(105, 115);
        glVertex2f(90, 110);
        glVertex2f(95, 120);
        glVertex2f(115, 130);
        glVertex2f(125, 125);
        glVertex2f(145, 120);
        glVertex2f(150, 120);
        glVertex2f(160, 115);
        glVertex2f(165, 120);
        glVertex2f(160, 125);
        glVertex2f(165, 130);
        glVertex2f(160, 135);
        glVertex2f(170, 140);
        glVertex2f(170, 150);
        glVertex2f(160, 160);
        glVertex2f(175, 155);
        glVertex2f(185, 145);
        glVertex2f(190, 135);
        glVertex2f(205, 135);
        glVertex2f(195, 132);
        glVertex2f(185, 125);
        glVertex2f(190, 120);
        glVertex2f(190, 115);
        glVertex2f(187, 120);
        glVertex2f(185, 115);
        glVertex2f(190, 105);
        glVertex2f(185, 105);
        glVertex2f(180, 110);
        glVertex2f(180, 105);
        glVertex2f(185, 95);
        glVertex2f(195, 90);
        glVertex2f(200, 90);
        glVertex2f(205, 85);
        glVertex2f(210, 85);
        glVertex2f(215, 80);
        glVertex2f(220, 80);
        glVertex2f(225, 75);
        glVertex2f(220, 70);
        glVertex2f(215, 75);
        glVertex2f(210, 70);
        glVertex2f(185, 80);
        glVertex2f(180, 75);
        glVertex2f(180, 75);
        glVertex2f(185, 70);
        glVertex2f(190, 65);
        glVertex2f(190, 60);
        glVertex2f(195, 55);
        glVertex2f(185, 55);
        glVertex2f(190, 50);
        glVertex2f(195, 45);
        glVertex2f(200, 42);
        glVertex2f(200, 40);
        glVertex2f(190, 40);
        glVertex2f(185, 45);
        glVertex2f(185, 40);
        glVertex2f(180, 40);
        glVertex2f(180, 50);
        glVertex2f(183, 50);
        glVertex2f(175, 58);
        glVertex2f(170, 55);
        glVertex2f(170, 50);
        glVertex2f(165, 35);
        glVertex2f(178, 25);
        glVertex2f(180, 20);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(90, 57);
        glVertex2f(90, 65);
        glVertex2f(280, 69);
        glVertex2f(280, 61);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(90, 64);
        glVertex2f(50, 65);
        glVertex2f(90, 63);
        glVertex2f(50, 61);
        glVertex2f(90, 62);
        glVertex2f(57, 62);
        glVertex2f(90, 60);
        glVertex2f(57, 63);
        glVertex2f(90, 59);
        glVertex2f(55, 59);
        glVertex2f(90, 59);
        glVertex2f(54, 56);
        glVertex2f(90, 58);
        glVertex2f(53, 53);
        glVertex2f(90, 57);
        glVertex2f(53, 51);
        glVertex2f(90, 58);
        glVertex2f(54, 63);
        glVertex2f(90, 57);
        glVertex2f(50, 61);
        glVertex2f(90, 58);
        glVertex2f(50, 48);
        glVertex2f(90, 57);
        glVertex2f(50, 52);
        glVertex2f(90, 58);
        glVertex2f(50, 45);
        glVertex2f(90, 57);
        glVertex2f(50, 42);
        glVertex2f(90, 58);
        glVertex2f(50, 46);
        glVertex2f(90, 57);
        glVertex2f(50, 47);
        glEnd();
        glTranslatef(300, 200, 0);
        glScalef(1, 1, 1);
        glPopMatrix();
        glLineWidth(1.0f);
    }
    ~Witch() {
    }
};
void init(void)
{
    glClearColor(0.0, 0.1, 0.4, 1.1);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}
void Roundshape(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.2 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}
void display(void)
{
    House HouseObj;
    Dune DuneObj;
    Mountain MountainObj;
    Tree TreeObj;
    Witch WitchObj;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);
    glPushMatrix();
    MountainObj.Position(-123, -20, 0);
    MountainObj.Mountain_big();
    glPopMatrix();
    glPushMatrix();
    MountainObj.Position(222, -50, 0);
    MountainObj.Mountain_small2();
    glPopMatrix();
    glPushMatrix();
    MountainObj.Position(750, -20, 0);
    MountainObj.Mountain_big();
    glPopMatrix();
    glPushMatrix();
    MountainObj.Position(0.1, 0, 0);
    MountainObj.Mountain_big();
    glPopMatrix();
    glPushMatrix();
    DuneObj.Position(380, 0, 0);
    DuneObj.Dune_Model_1_Draw();
    glPopMatrix();
    glPushMatrix();
    HouseObj.Position(320, 37, 0);
    HouseObj.House_Draw();
    glPopMatrix();
    glPushMatrix();
    MountainObj.Position(550, -20, 0);
    MountainObj.Mountain_big();
    glPopMatrix();
    glPushMatrix();
    MountainObj.Position(0, 0, 0);
    MountainObj.Mountain_small();
    glPopMatrix();
    glPushMatrix();
    DuneObj.Position(0, -0.9, 0);
    DuneObj.Dune_Model_1_Draw();
    glPopMatrix();
    glPushMatrix();
    DuneObj.Position(0, -0.9, 0);
    DuneObj.Dune_Model_2_Draw();
    glPopMatrix();
    glPushMatrix();
    DuneObj.Position(400, -0.001, 0);
    DuneObj.Dune_Model_2_Draw();
    glPopMatrix();
    glPushMatrix();
    HouseObj.Position(0, 0, 0);
    HouseObj.House_Draw();
    glPopMatrix();
    glPushMatrix();
    HouseObj.Position(450, 0, 0);
    HouseObj.House_Draw();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(0, 0, 0);
    TreeObj.Plant_Model_1();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(540, 0, 0);
    TreeObj.Plant_Model_1();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(750, 0, 0);
    TreeObj.Plant_Model_1();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(292, 40, 0);
    TreeObj.Plant_Model_1();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(30, -20, 0);
    TreeObj.Plant_Model_2();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(50, -10, 0);
    TreeObj.Plant_Model_2();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(322, 0, 0);
    TreeObj.Plant_Model_2();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(350, -15, 0);
    TreeObj.Plant_Model_2();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(760, -25, 0);
    TreeObj.Plant_Model_2();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(90, 2, 0);
    TreeObj.Plant_Model_3();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(125, 0, 0);
    TreeObj.Plant_Model_3();
    glPopMatrix();
    glPushMatrix();
    TreeObj.Position(450, -22, 0);
    TreeObj.Plant_Model_3();
    glPopMatrix();
    WitchObj.Color(0.52, 0.21, 0.1);
    glPushMatrix();
    WitchObj.Position(ax - 80, 80, 0);
    WitchObj.Witch_model();
    glPopMatrix();
    WitchObj.Color(0.61, 0.21, 1.1);
    glPushMatrix();
    WitchObj.Position(dx + 300, 125, 0);
    WitchObj.Witch_model();
    glPopMatrix();
    TreeObj.Color(1, 1, 1);
    glPushMatrix();
    WitchObj.Position(cx, -40, 0);
    WitchObj.Witch_model();
    glPopMatrix();
    WitchObj.Color(1, 0.21, 0.1);
    glPushMatrix();
    WitchObj.Position(bx + 100, 150, 0);
    WitchObj.Witch_model();
    glPopMatrix();
    WitchObj.Color(0.61, 2.21, 1.1);
    glPushMatrix();
    WitchObj.Position(ax + -300, 170, 0);
    WitchObj.Witch_model();
    glPopMatrix();
    WitchObj.Color(1.61, 5.21, 1.1);
    glPushMatrix();
    WitchObj.Position(cx + -500, 20, 0);
    WitchObj.Witch_model();
    glPopMatrix();
    TreeObj.field();

    glFlush();
}
void move_right() {



    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if (cx > 1000) {
        cx = -300;
    }
    if (bx > 1000) {
        bx = -400;

    }
    if (cx > 1000) {
        cx = -400;

    }
    if (dx > 1000) {
        dx = -500;

    }


    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1400, 600);
    glutCreateWindow("Hisam Assignment");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(move_right);
    glutMainLoop();
}