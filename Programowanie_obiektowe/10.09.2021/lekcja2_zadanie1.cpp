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
	
	/*Zadanie 1 (zajêcia 1)
Utworzyæ klasê prostok¹t
Zadeklarowaæ dwie w³aœciwoœci (d³ugoœci boków)
Zadeklarowaæ prototypy:
obliczaj¹cy pole (zwracaj¹cy pole)
obliczaj¹cy obwód (zwracaj¹cy obwód)

wyœwietlaj¹ca d³ugoœci boków oraz wyœwietlaj¹ca pole i obwód

U¿ytkownik podaje dane z klawiatury*/
	
	
	
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
