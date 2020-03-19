//Ситдиков Артур Наилевич группа 05-901
//ClassPoint

#include <iostream>
#include <math.h>

using namespace std;

class Point
{
private:
	float x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(float X, float Y)
	{
		x = X;
		y = Y;
	}
	void Print()
	{
		cout << "x = " << x << "  y = " << y << endl;
	}
	void Rad()
	{
		float s;
		s = sqrt(x * x + y * y);
		cout << s << endl;
	}
	void Move(float a, float b)
	{
		x = x + a;
		y = y + b;
	}
	void setPoint(float Point_x, float Point_y)
	{
		x = Point_x;
		y = Point_y;
	}
	void getPoint()
	{
		cout << x << " " << y;
	}
	void setSkal(float f)
	{
		x = x * f;
		y = y * f;
	}
};

int main()
{
	float x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	Point A;
	A.setPoint(x, y);
	A.getPoint();
	cout << endl;
	A.Print();
	A.Rad();
	A.Move(1, 1);
	A.setSkal(2);
}