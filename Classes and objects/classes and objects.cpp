#include<iostream>
//#include<cmath>
using namespace std;

	class cylinder{
		public:
			double height ;
			double radius;
			double m_pi;
			
			double CalculateArea(){
				return (2*m_pi*radius*radius)+(2*m_pi*radius*height);
			}	
			double CalculateVolume(){
				return (m_pi*radius*radius*height);
			}		
	};
int main(){
	cylinder c1,c2,c3;
	c1.height=12;
	c1.radius=6;
	c1.m_pi=3.142;
	c2.m_pi=3.142;
	c2.height=15;
	c2.radius=7;
	c3.m_pi=3.142;
	c3.height=15;
	c3.radius=9;

	double vol,area;
    vol=c1.CalculateVolume();
	area=c1.CalculateArea();
	cout<<"vol:"<<vol<<endl;
	cout<<"area:"<<area<<endl;
	
    vol=c2.CalculateVolume();
	area=c2.CalculateArea();
	cout<<"vol:"<<vol<<endl;
	cout<<"area:"<<area<<endl;
	
	vol=c3.CalculateVolume();
	area=c3.CalculateArea();
	cout<<"vol:"<<vol<<endl;
	cout<<"area:"<<area<<endl;
	return 0;
	
}