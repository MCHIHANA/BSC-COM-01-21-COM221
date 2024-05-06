#include <iostream>
#include <cstdlib>

using namespace std;
double area;

int main(){
	
	int areaOfShapes;
	
	cout<< "enter selection \n";
	cout<< "1. Square\n";
	cout<< "2. Rectangle\n";
	cout<< "3. Triangle\n";
	cout<< "4. Quit program\n";
	cin>> areaOfShapes;
	
	switch(areaOfShapes) {
		
		case 1:{
			double side;
			cout<<"enter the vakue of length of the square"<<endl;
			cin>>side;
			  area = side * side;
			  
			  cout<<"the area of the Square is: "<<area <<endl;
			break;
		}
		
		case 2: {
			double width, length;
			cout<<"enter the value of Width"<<endl;
			cin>>width;
			cout<<"enter the value of length"<<endl;
			cin>>length;
			area= width * length;
			cout<<"the area of the Rectangle is: "<< area<<endl;
			break;
		}	
		
		case 3: {
			double base, height;
			cout<<"enter the value of height"<<endl;
			cin>> height;
			cout<<"enter the value of base"<<endl;
			cin>>base;
			area = base * height * 0.5;
			cout<<"the area of the Triangle is: "<< area <<endl;
			break;
		}
		case 4: {
			
			break;
		}
	}
	return 0;

}