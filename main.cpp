#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
	SetConsoleOutputCP(65001);

	list<const char*>rosen = { "Tabata","Nippori","Uguisudani","Ueno","Okachimachi","Akihabara","Kanda",
	"Tokyo","Yurakucho","Shimbashi","Hamamatsucho","Tamachi","Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya","Harajuku",
	"Yoyogi","Shinjuku","Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro","Otsuka","Sugamo","Komagome" };

	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		++itr)
	{
		if (*itr == "Nippori") {
			itr = rosen.insert(itr, "Nishi-Nippori");
			++itr;
		}
		if (*itr == "Shinagawa") {
			itr = rosen.insert(itr, "Takanawa-Gateway");
			++itr;
		}
	}
	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		++itr)
	{
		cout << *itr << endl;
	}

	return 0;
}