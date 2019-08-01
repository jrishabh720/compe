#include<bits/stdc++.h>
using namespace std;

double findMin(double x, double y){
	return (x<y) ? x : y;
}
double findAng(double hr, double min){
	if(hr<0 || min<0  || hr>12 || min>60){
		cout<<"-1";
	}
	if(hr == 12){
		hr = 0;
	}
	if(min == 60){
		min = 0;
	}
	double hrAngle = 0.5 * (hr*60 + min);
	double minAngle = 6 * min;
	double angle = abs(hrAngle - minAngle);
	angle = findMin(360-angle, angle);
	return angle;
}
int main() {
	int period;
	cin>>period;
	double longitude;
	cin>>longitude;
	
	double temp = period * longitude;
	double time = temp/360;
	int b = time;
	time = time-b;
	int min = time*60;
	int hrs = b;
	cout<<fixed<<setprecision(2)<<findAng(hrs,min);
	

	
}
