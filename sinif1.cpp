#include <iostream>
using namespace std;

class Dikdortgen{
	public:
		int genislik, yukseklik, alan;
		void Hesaplama(){
			A10:
			cout << "Dikdortgenin genisligini giriniz: ";
			cin >> genislik;
			cout << "Dikdortgenin yuksekligini giriniz: ";
			cin >> yukseklik;
			if (genislik<=0 || yukseklik<=0){
				cout << "Uzunluklardan en az biri pozitif girilmedi!\nDegerleri tekrar girmeniz gerekmektedir.\n\n";
				goto A10;
			}
			alan=genislik*yukseklik;
		}
};

int main(){
	Dikdortgen dikdortgen1;
	cout << "Dikdortgen alan hesaplama programina hos geldiniz.\n\n";
	dikdortgen1.Hesaplama();
	cout << "\n\nDikdortgenin alani = " << dikdortgen1.alan << " brı dir.";
	cout << "\n\n\n";
	system("pause");
	return 0;
}
