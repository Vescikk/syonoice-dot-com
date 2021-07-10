#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

void randNumArr() {
	srand(time(NULL));
	int  x;
	cout << "Podaj iloma liczbami losowymi chcesz wypelnic tablice: ";
	cin >> x; 
	int* tab = new int[x];
	for (int i = 0; i < x; i++) {
		tab[i] = rand(); 
		cout << tab[i] << " ";
	}
}

long long silnia() {
	int a = 1,n;
	long long silnia = 1;

	cout << "Wprowadz liczbe z ktorej chcesz obliczyc silnie: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		silnia *= i;
	}
	cout << "Silnia z liczby " << n << "! wynosi: " << silnia;
	return 0;   
} 

float srednia() { 
	float a, b,c;
	cout << "Wprowadz dwie liczby, z ktorych chcesz obliczyc srednia: ";
	cin >> a >> b;

	c = (a + b) / 2;
		cout << "srednia z liczb " << a << " " << b << " wynosi: " << c;
		return 0;

}
 

int main()
{
	int a;
	cout << 
		"Wybierz funkcje, ktora chcesz wywolac: " << endl<< 
		"Nacisnij 1 jesli chcesz obliczyc silnie" <<endl<<
		"Nacisnij 2 jesli chcesz obliczyc srednia"<<endl <<
		"Nacisnij 3 jesli chcesz stworzyc tablice wypelniona losowymi liczbami" << endl;
	cin >> a;
	switch (a)
	{ 
	case 1:
			silnia(); 
	case 2:
		srednia();
	case 3:
		randNumArr();
	default:
	break;
	}


}
