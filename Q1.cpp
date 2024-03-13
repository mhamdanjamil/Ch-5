// Solution to Ch5 Ex # 1 //
#include <iostream>
#include <cmath>
using namespace std;

float circarea(float);

float circarea(float r)
{
	float area;
	const float PI=3.14159F;
	
	area=PI*pow(r,2);
	return area;
}

int main()
{
	float radius,result;
	cout<<"Enter the Value of Radius"<<endl;
	cin>>radius;
	result=circarea(radius);
	cout<<"Area is "<<result;
	return 0;	
}


