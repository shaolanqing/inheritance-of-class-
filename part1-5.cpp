/*5、 类的继承
定义一个point类，包含私有数据成员x，y，成员函数包括无参构造函数，带参构造函数，
set和get属性函数。定义circle类，从point类公有派生，增加数据成员半径r，成员函数包括无参构造函数，
带参构造函数，计算面积函数getarea。在main函数中定义一个circle的对象，并计算其面积。*/
#include<iostream>
using namespace std;
class Point
{
private:
	float x,y;
public:
	Point()
	{
		x=0;
		y=0;
	}
	Point(float xx,float yy)
	{
		x=xx;
		y=yy;
	}
	void setx(float xx)     //利用setx()函数来修改x的值 
	{
		x=xx;
	}
	void sety(float yy)
	{
		y=yy;
	}
	float getx()         //利用getx()函数来获取x的值 
	{
		return x;
	}
	float gety()
	{
		return y;
	}
	
};
class Circle:public Point    //Circle类继承Point公有部分 
{
private:
	float r;
	const double pi;    //定义常数据成员pi 
public:
    Circle():pi(3.14)   //在构造函数列表中初始化pi 
	{
		r=0;
	}
	Circle(float x,float y,float rr):Point(x,y),pi(3.14)
	{
           
		r=rr;
	}
	void getArea()    //圆的面积函数 
	{
		double area;
		area=pi*r*r;
		cout<<"area:"<<area<<endl;
	}
};
int main()
{
	Circle c1(4,5,9);
	c1.getArea();  //调用面积函数 
	return 0;
}



