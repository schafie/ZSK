#include <iostream>

using namespace std;

class Rectangle{
	public:
		float a, b;
		
	float area();
	float circumference();
	void showSideLength();
	void showAreaCircum();
};
	

float Rectangle::area(){
	return a*b;
}

float Rectangle::circumference(){
	return (2*a)+(2*b);
}

void Rectangle::showSideLength(){
	cout << "\nDlugosc bokow wynosi " << Rectangle::a << ", " << Rectangle::b ;
}

void Rectangle::showAreaCircum(){
	cout  << "\nPole: " << Rectangle::area() << "\n" << "Obwod: " << Rectangle::circumference() ;
} 

int main(){
	
	/*Zadanie 1 (zaj�cia 1)
Utworzy� klas� prostok�t
Zadeklarowa� dwie w�a�ciwo�ci (d�ugo�ci bok�w)
Zadeklarowa� prototypy:
obliczaj�cy pole (zwracaj�cy pole)
obliczaj�cy obw�d (zwracaj�cy obw�d)

wy�wietlaj�ca d�ugo�ci bok�w oraz wy�wietlaj�ca pole i obw�d

U�ytkownik podaje dane z klawiatury*/
	
	
	
	Rectangle prostokat;
	
	cout << "Podaj bok a: ";
		cin >> prostokat.a;
		
	cout << "Podaj bok b: ";
		cin >> prostokat.b;
		
	prostokat.area();
	prostokat.circumference();
	prostokat.showSideLength();
	prostokat.showAreaCircum();
	
	
	
	
	return 0;
}
