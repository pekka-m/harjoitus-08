/*********************************************************************
Tehtävä: HARJOITUS 8
Tekijä: Pekka Melgin
PVM: 17.9.2013
Kuvaus:
Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
järjestyksessä (pienimmästä suurimpaan) näytölle
(katso harj. 1 suunnitelma)
a) käytä kokonaislukuja
b) käytä liukulukuja (=reaalilukuja)
*********************************************************************/
#include <iostream> 
using namespace std; 
int main() 
{ 
	int luku1; // b) float luku1;
	int luku2; // b) float luku2;
	int luku3; // b) float luku3;
	cout << "Anna luku : ";
	cin >> luku1;
	cout << "Anna luku : ";
	cin >> luku2;
	cout << "Anna luku : ";
	cin >> luku3;

	if (luku1 > luku2) {
		if (luku2 > luku3) {
			cout << luku1 <<luku2 <<luku3;
		}
		else {
			if (luku1 > luku3) {
				cout << luku1 << luku3 << luku2;
			}
			else {
				cout << luku3 << luku1 << luku2;
			}
		}
	}
	else {
		if (luku2 > luku3) {
			if (luku1 > luku3) {
				cout << luku2 << luku1 << luku3;
			}
			else {
				cout << luku2 << luku3 << luku1;
			}
		}
		else {
			cout << luku3 << luku2 << luku1;
		}
	}
}