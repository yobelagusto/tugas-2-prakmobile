#include "Header.h"
void main(int argc, char** argv)
{
	cout << "masukan jumlah titik: "; cin >> edges;
	for (int i = 0; i < edges; i++)
	{
		cout << "masukan kordinat : " << i + 1 << " : ";
		cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}
	cout << "Enter reflection axis ( x or y ): "; cin >>
		shearingAxis;
	if (shearingAxis == 'x' || shearingAxis == 'X')
	{
		cout << "masukan shearing factor untuk X: ";
		cin >> shearingX;
	}
	else
	{
		cout << "masukan shearing factor untuk Y: ";
		cin >> shearingY;
	}
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("2018080");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
