

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main(){

	






	/* Hesap makinesi örneði yapýlacak. 
    Detaylý ve yeni projede*/

    /*
    int yas;
	cout << "Yaþýnýzý girin: \n";
    while (true)
    {
        cin >> yas;
		if (cin.fail() || cin.peek() != '\n'|| yas < 0) // verilan iki koþuldan biri saðlanýrsa hata mesajý verilir.
        {
                cin.clear();
			    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Geçersiz yaþ girdiniz. Lütfen geçerli bir yaþ giriniz: \n";
        }
        else
        {
			break; //döngüden çýkmayý saðlýyor, yazýlmazsa doðru deðer girilse bile döngü devam eder.
        }
    } cout << (yas < 12 ? "Çocuksunuz." : (yas < 20 ? "Gençsiniz." : (yas < 65 ? "Yetiþkinsiniz." : "Yaþlýsýnýz ilerlemiþ :)"))) << endl;
    */

    /*
    int k;
    while (true)
    {
        cout << "Bir tam sayý giriniz: \n";
        cin >> k;

        if (cin.peek() != '\n') //Girilen deðerin bir tam sayý olup olmadýðýný kontrol et
        {
            cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Geçersiz giriþ. Lütfen bir tam sayý giriniz." << endl;
			continue; //hatalý giriþ yapýldýkça döngünün baþýna dön
        }break; //döngüden çýkmayý saðlýyor, yazýlmazsa doðru deðer girilse bile döngü devam eder.
    }

    if (k > 0)
    {
        cout << k << " sayýsý pozitiftir." << endl;
    }
    else if (k < 0)
    {
        cout << k << " sayýsý negatiftir." << endl;
    }
    else
    {
        cout << "Sýfýr girdiðini anlamayacaðýmý mý sandýn ;)" << endl;
    }
	return 0;
    */

    /*
    //peki burada virgüllü girilirse ne olacak? sorusuna cevap aradýk :)
    int a;
    while (true)           //kullanýcý geçerli giriþ yapana kadar devam et
    {
        cout << "Notunuzu giriniz: \n";
        cin >> a;
                            //Girilen notun 1 ile 5 arasýnda olup olmadýðýný kontrol et
                            //cin.peek() bir sonraki karakteri kontrol eder ancak akýþtan kaldýrmaz.
                            //Not giriþinde, tam sayýdan sonra baþka bir karakter (örneðin, . veya ,) olup olmadýðýný
                            //kontrol etmek için kullanýlýr. Bu, yalnýzca tam sayý giriþlerini kabul etmeyi saðlar.
        if (cin.peek() != '\n' || a < 1 || a > 5)
        {
            cin.clear();    //hata bayraðýný temizle ve akýþý tekrar kullanýlabilir yap
            cout << "Geçersiz not girdiniz. 1 ile 5 arasý not girmelisiniz.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            //cin.ignore() giriþ akýþýndaki fazla karakterleri temizler.
                            //Yazýlmazsa döngü tekrar çalýþtýðýnda, bu karakterler tekrar iþlenmeye çalýþýlýr
                            //ve program sürekli olarak ayný hatayý verir.
            continue;       //hata devam ettiði sürece döngünün baþýna dön. Yoksa switch'e geç.
        }
          switch (a)
        {
        case 1:{
            cout << "Notunuz: Çok kötü" << endl;
            break;
        }case 2:{
            cout << "Notunuz: Kötü" << endl;
            break;
            }
        case 3:{
            cout << "Notunuz: Orta" << endl;
            break;
        }case 4: {
            cout << "Notunuz: iyi" << endl;
            break;
            }
        case 5: {
            cout << "Notunuz: Çok iyi" << endl;
            break;
            }
        default: {
            cout << "Geçersiz not girdiniz." << endl;
            break;
            }
        }
        return 0;
    }*/

    /*int n,m;
	cout << "Bir tam sayý giriniz: \n";
	cin >> n;
    m = (n < 0) ? -n : n;
	cout << "Mutlak deðeri: " << m << endl;*/

    /*int a, b, aci;
	double pi=3.14 , alan;
	cout << "ilk kenar uzunluðunu giriniz: \n";
	cin >> a;
	cout << "ikinci kenar uzunluðunu giriniz: \n";
	cin >> b;
	cout << "iki kenar arasýndaki açýyý giriniz (derece): \n";
    cin >> aci;
    alan = (a * b * sin(aci * pi / 180)) / 2;
    cout << "Üçgenin alaný: " << alan << endl;
	return 0;*/

    /*int a;
	cout << "Pozitif bir tam sayý giriniz: \n";
	cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0) {
            cout << i << endl;
        }
    }*/

    /*
    int s;
    cout << "Pozitif bir sayý giriniz: \n";
	cin >> s;
    if (s < 0)
    {
        cout << s << " Sayýsý pozitif deðildir." << endl;
		return 0;
    }
	for (int a = 1; a <= s; a++) {
        for (int b = a; b <= s; b++) {      // b'yi a'dan baþlattýk, böylece tekrar eden çiftleri önlüyoruz.
            if (a * a + b * b == s*s )
            {
                cout << s << " Sayýsý " << a << " ve " << b << " 'nin kareleri toplamýnýn kareköküne eþittir." << endl;
				return 0;
            }
        }
    }
    */
}