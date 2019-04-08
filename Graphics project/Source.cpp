#include<windows.h>
#include <GL\glut.h>
#include<iostream>
#include <GL/gl.h>   
#include <GL/glu.h>

#include <math.h>

int speed = 1;
using namespace std;

int i = speed, j;
int scase = 0;

int i2 = speed, j2;
int scase2 = 0;

GLint viewWidth = 640, viewHeight = 480;

int tempX = 200, tempY = 200;



void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_LINES);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void setPixel(int x, int y)   //draw 
{
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(x, y);
	glEnd();
}




void drawFilledCircle1(){
	GLfloat cx = 114 + i2, cy = 440;
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat radius = 80;
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * 3.1416;
	glColor3f(0.118, 0.565, 1.000);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(cx, cy); // center of circle
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			cx + (radius * cos(i *  twicePi / triangleAmount)),
			cy + (radius * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();
}


void drawFilledCircle2(){
	GLfloat cx = 144 + i2, cy = 350;
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat radius = 80;
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * 3.1416;
	glColor3f(0.118, 0.565, 1.000);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(cx, cy); // center of circle
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			cx + (radius * cos(i *  twicePi / triangleAmount)),
			cy + (radius * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();
}

void drawFilledCircle3(){
	GLfloat cx = 154 + i2, cy = 250;
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat radius = 80;
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * 3.1416;
	glColor3f(0.118, 0.565, 1.000);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(cx, cy); // center of circle
	for (i = 0; i <= triangleAmount; i++) {
		glVertex2f(
			cx + (radius * cos(i *  twicePi / triangleAmount)),
			cy + (radius * sin(i * twicePi / triangleAmount))
			);
	}
	glEnd();
}


void containers(){


	// 1st Lawn  Containers
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(558, 267);
	glVertex2i(631, 267);
	glVertex2i(640, 248);
	glVertex2i(567, 248);
	glEnd();




	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(567, 247);
	glVertex2i(640, 247);
	glVertex2i(639, 225);
	glVertex2i(562, 225);
	glEnd();


	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(558, 266);
	glVertex2i(566, 247);
	glVertex2i(562, 225);
	glVertex2i(555, 243);
	glEnd();



	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(579, 266);
	glVertex2i(586, 252);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(599, 266);
	glVertex2i(606, 252);




	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(619, 266);
	glVertex2i(626, 252);


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(586, 244);
	glVertex2i(582, 227);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(606, 244);
	glVertex2i(602, 227);


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(626, 244);
	glVertex2i(622, 227);


	glEnd();

	// 2nd Lawn  Containers
	glColor3f(0.961, 0.871, 0.702);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(558, 267 + 90);
	glVertex2i(631, 267 + 90);
	glVertex2i(640, 248 + 90);
	glVertex2i(567, 248 + 90);
	glEnd();




	glColor3f(0.961, 0.871, 0.702);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(567, 247 + 90);
	glVertex2i(640, 247 + 90);
	glVertex2i(639, 225 + 90);
	glVertex2i(562, 225 + 90);
	glEnd();


	glColor3f(0.961, 0.871, 0.702);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(558, 266 + 90);
	glVertex2i(566, 247 + 90);
	glVertex2i(562, 225 + 90);
	glVertex2i(555, 243 + 90);
	glEnd();



	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(579, 266 + 90);
	glVertex2i(586, 252 + 90);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(599, 266 + 90);
	glVertex2i(606, 252 + 90);




	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(619, 266 + 90);
	glVertex2i(626, 252 + 90);


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(586, 244 + 90);
	glVertex2i(582, 227 + 90);

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(606, 244 + 90);
	glVertex2i(602, 227 + 90);


	glColor3f(0.0, 0.0, 0.0);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(626, 244 + 90);
	glVertex2i(622, 227 + 90);


	glEnd();

}

void lawn()
{//LAWN

	glColor3f(0.1, 0.1, 0.1);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(284, 361);
	glVertex2i(640, 361);
	glVertex2i(640, 190);
	glVertex2i(338, 190);
	glEnd();
	// LAWN ROAD
	glColor3f(0.75, 0.75, 0.75);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(326, 313);
	glVertex2i(640, 313);
	glVertex2i(640, 282);
	glVertex2i(341, 282);
	glEnd();

	// Road WHite mARk
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(564, 306);
	glVertex2i(600, 306);
	glVertex2i(607, 294);
	glVertex2i(571, 294);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(564 + 50, 306);
	glVertex2i(600 + 50, 306);
	glVertex2i(607 + 50, 294);
	glVertex2i(571 + 50, 294);
	glEnd();


}


void building(){
	//building 
	glColor3f(0.5, 0.5, 0.5);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(350, 160);
	glVertex2i(550, 160);
	glVertex2i(550, 349);
	glVertex2i(450, 399);
	glVertex2i(350, 349);
	glEnd();

	//pillars of building 6
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(375, 161);
	glVertex2i(385, 161);
	glVertex2i(385, 350);
	glVertex2i(375, 350);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(525, 161);
	glVertex2i(515, 161);
	glVertex2i(515, 350);
	glVertex2i(525, 350);
	glEnd();

	//the rooftop of 6
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(354, 348);
	glVertex2i(546, 348);
	glVertex2i(450, 396);
	glEnd();


	//gate of building 
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(435, 161);
	glVertex2i(465, 161);
	glVertex2i(465, 200);
	glVertex2i(435, 200);
	glEnd();





}

void water(){
	//lake
	glColor3f(0.118, 0.565, 1.000);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 108);
	glVertex2i(00, 00);
	glVertex2i(650, 00);
	glVertex2i(650, 108);
	glEnd();

	//beach water
	glColor3f(0.118, 0.565, 1.000);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 480);
	glVertex2i(197, 480);
	glVertex2i(258, 160);
	glVertex2i(0, 160);
	glEnd();

	glColor3f(0.118, 0.565, 1.000);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(0, 161);
	glVertex2i(135, 161);
	glVertex2i(135, 107);
	glVertex2i(0, 101);
	glEnd();

}

void brickwall(){
	// brick wall
	glColor3f(0.5568630, 0.1372550, 0.1372550);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 111);
	glVertex2i(135, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 111);
	glEnd();








	//botom line
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(134, 92);
	glVertex2i(134, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 92);
	glEnd();



	// brick wall

	//top
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 111);
	glVertex2i(135, 109);
	glVertex2i(650, 109);
	glVertex2i(650, 111);
	glEnd();

	//bottom
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 92);
	glVertex2i(135, 90);
	glVertex2i(650, 90);
	glVertex2i(650, 92);
	glEnd();





	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(135, 111);
	glVertex2i(135, 90);
	glVertex2i(134, 90);
	glVertex2i(134, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(199, 111);
	glVertex2i(199, 90);
	glVertex2i(201, 90);
	glVertex2i(201, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(266, 111);
	glVertex2i(266, 90);
	glVertex2i(268, 90);
	glVertex2i(268, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(333, 111);
	glVertex2i(333, 90);
	glVertex2i(335, 90);
	glVertex2i(335, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(400, 111);
	glVertex2i(400, 90);
	glVertex2i(402, 90);
	glVertex2i(402, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(467, 111);
	glVertex2i(467, 90);
	glVertex2i(469, 90);
	glVertex2i(469, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(534, 111);
	glVertex2i(534, 90);
	glVertex2i(536, 90);
	glVertex2i(536, 111);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(601, 111);
	glVertex2i(601, 90);
	glVertex2i(603, 90);
	glVertex2i(603, 111);
	glEnd();


}

void road(){
	//the road
	glColor3f(0.1, 0.1, 0.1);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(134, 110);
	glVertex2i(650, 110);
	glVertex2i(650, 160);
	glVertex2i(127, 160);


	glEnd();
}

void ship(){

	//ship
	//bottom
	glColor3f(0.1, 00.1, 0.1);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(223 + 20 - i, 73 + 20);
	glVertex2i(479 + 20 - i, 73 + 20);
	glVertex2i(477 + 20 - i, 46 + 20);
	glVertex2i(243 + 20 - i, 46 + 20);


	//line

	glColor3f(0.77, 0.78, 0.78);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(223 + 20 - i, 78 + 20);
	glVertex2i(479 + 20 - i, 78 + 20);
	glVertex2i(479 + 20 - i, 73 + 20);
	glVertex2i(223 + 20 - i, 73 + 20);

	//left plank
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(223 + 20 - i, 98 + 20);
	glVertex2i(276 + 20 - i, 98 + 20);
	glVertex2i(324 + 20 - i, 78 + 20);
	glVertex2i(223 + 20 - i, 78 + 20);

	//right plank
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(448 + 20 - i, 106 + 20);
	glVertex2i(483 + 20 - i, 106 + 20);
	glVertex2i(479 + 20 - i, 78 + 20);
	glVertex2i(425 + 20 - i, 78 + 20);

	//control room
	glColor3f(0.77, 0.78, 0.78);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(249 + 20 - i, 122 + 20);
	glVertex2i(276 + 20 - i, 122 + 20);
	glVertex2i(276 + 20 - i, 98 + 20);
	glVertex2i(249 + 20 - i, 98 + 20);

	//container1
	glColor3f(1.0f, 0.0f, 1.0f);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(324 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 - i, 78 + 20);
	glVertex2i(324 + 20 - i, 78 + 20);

	//container2
	glColor3f(0.1f, 0.1f, 0.0f);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(324 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 - i, 78 + 20);
	glVertex2i(324 + 20 + 20 - i, 78 + 20);

	//container 3
	glColor3f(1.0f, 0.5f, 0.0f);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(324 + 20 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 + 20 - i, 78 + 20);
	glVertex2i(324 + 20 + 20 + 20 - i, 78 + 20);

	//container 3
	glColor3f(0.0f, 1.0f, 0.0f);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(324 + 20 + 20 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 + 20 + 20 - i, 78 + 20);
	glVertex2i(324 + 20 + 20 + 20 + 20 - i, 78 + 20);


	//container 4
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(324 + 20 + 20 + 20 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 + 20 + 20 + 20 - i, 95 + 20);
	glVertex2i(344 + 20 + 20 + 20 + 20 + 20 - i, 78 + 20);
	glVertex2i(324 + 20 + 20 + 20 + 20 + 20 - i, 78 + 20);

	//antena
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(264 + 20 - i, 141 + 20);
	glVertex2i(266 + 20 - i, 141 + 20);
	glVertex2i(266 + 20 - i, 122 + 20);
	glVertex2i(264 + 20 - i, 122 + 20);
}

void nowka(){
	//nowka body


	glColor3f(0.1, 00.1, 0.1);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0 + i, 40);
	glVertex2i(140 + i, 40);
	glVertex2i(120 + i, 20);
	glVertex2i(20 + i, 20);
	//roof
	glColor3f(1.0, 0.30, 0.80);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(30 + i, 55);
	glVertex2i(110 + i, 55);
	glVertex2i(110 + i, 40);
	glVertex2i(30 + i, 40);
}

void beach(){
	//beach

	glColor3f(1.0f, 1.0f, 0.0f);
	glPointSize(4.0);
	glBegin(GL_POLYGON);
	glVertex2i(258, 160);
	glVertex2i(197, 480);
	glVertex2i(244, 480);
	glVertex2i(349, 160);

	glEnd();

	//Stick
	glColor3f(0.647, 0.165, 0.165);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(285, 275);
	glVertex2i(286, 273);
	glVertex2i(274, 248);
	glVertex2i(280, 258);
	glEnd();


	//BEACH ROAD
	glColor3f(0.75, 0.75, 0.75);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(226, 480);
	glVertex2i(246, 480);
	glVertex2i(348, 161);
	glVertex2i(313, 161);
	glEnd();

	// Umbrella

	glColor3f(1.000, 0.0, 0.000);
	glPointSize(4.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(272, 281);
	glVertex2i(292, 287);
	glVertex2i(297, 267);

	glEnd();

	glColor3f(1.000, 1.0, 1.000);
	glPointSize(4.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(282, 276);
	glVertex2i(292, 287);
	glVertex2i(288, 272);

	glEnd();


}

void myDisplay(void)

{

//the line
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(00, 160);
	glVertex2i(00, 161);
	glVertex2i(650, 161);
	glVertex2i(650, 160);
	glEnd();



	//green
	glColor3f(0.0, 1.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_QUADS);
	glVertex2i(0, 720);
	glVertex2i(0, 160);
	glVertex2i(1024, 160);
	glVertex2i(1024, 720);
	glEnd();

	
	
	lawn();
	containers();
	building();
	water();
	brickwall();
	road();
	ship();
	nowka();
	beach();
	
	drawFilledCircle1();
	drawFilledCircle2();
	drawFilledCircle3();
	
	

	
	glEnd();
	glPopMatrix();

	glFlush();

}









void myMouseMove(int x, int y)
{
	tempX = x;
	tempY = viewHeight - y;

	cout << "(" << tempX << "," << tempY << ")" << endl;
}




void update(int value) {


	if (i >= 0)
	{

		i += 2;


	}

	if (i >= 650)
	{
		i = 0;
		j = 0;
	}
	glVertex2i(i, j);

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(80, update, 0);
}


void update2(int value) {


	if (i2 >= 0)
	{

		i2 += 1;


	}
	
	
	if (i2 >= 20)
	{
		i2 = 0;
		j2 = 0;
	}

	glVertex2i(i2, j2);

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(140, update2, 0);

}







void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 10);
	glutCreateWindow("port view");

	glutDisplayFunc(myDisplay);
	glutPassiveMotionFunc(myMouseMove);

	glutTimerFunc(25, update, 0);
	glutTimerFunc(25, update2, 0);

	myInit();
	glutMainLoop();
}