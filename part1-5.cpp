/*5�� ��ļ̳�
����һ��point�࣬����˽�����ݳ�Աx��y����Ա���������޲ι��캯�������ι��캯����
set��get���Ժ���������circle�࣬��point�๫���������������ݳ�Ա�뾶r����Ա���������޲ι��캯����
���ι��캯���������������getarea����main�����ж���һ��circle�Ķ��󣬲������������*/
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
	void setx(float xx)     //����setx()�������޸�x��ֵ 
	{
		x=xx;
	}
	void sety(float yy)
	{
		y=yy;
	}
	float getx()         //����getx()��������ȡx��ֵ 
	{
		return x;
	}
	float gety()
	{
		return y;
	}
	
};
class Circle:public Point    //Circle��̳�Point���в��� 
{
private:
	float r;
	const double pi;    //���峣���ݳ�Աpi 
public:
    Circle():pi(3.14)   //�ڹ��캯���б��г�ʼ��pi 
	{
		r=0;
	}
	Circle(float x,float y,float rr):Point(x,y),pi(3.14)
	{
           
		r=rr;
	}
	void getArea()    //Բ��������� 
	{
		double area;
		area=pi*r*r;
		cout<<"area:"<<area<<endl;
	}
};
int main()
{
	Circle c1(4,5,9);
	c1.getArea();  //����������� 
	return 0;
}



