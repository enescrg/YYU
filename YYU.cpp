

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main(){



    /*
    int t1, t2;
            //De�erler kullan�c�dan al�nacaksa
    //cout << "Ba�lang�� de�erlerini giriniz: \n";
    //cin >> t1;
    //cout << "2. de�eri girin: ";
    //cin >> t2;
	t1 = -1;
	t2 = 1;
    for (int i = -5; i <= 5; i+=6) {
        t1 = t1 + 2 * i;
        for (int j = 5; j >= 1; j-=3)
        {
			t1 = t1 - 2 * j;
			t2 = t2 - 2 * i;
		}t2 = t2 + i;
	}cout << "t1 de�eri: " << t1 << "\n" << "t2 de�eri: " << t2 << endl;
	return 0;
    */

    /*
    int gunler;
    cout << "L�tfen bir say� giriniz (1-7 aras�): \n";
	cin >> gunler;
    switch (gunler)
    {
        case 1:
            cout << "Pazartesi" << endl;
		    break;
        case 2:
			cout << "Sal�" << endl;
            break;
		case 3:
            cout << "�ar�amba" << endl;
            break;
		case 4:
            cout << "Per�embe" << endl;
			break;
        case 5:
            cout << "Cuma" << endl;
			break;
        case 6:
		    cout << "Cumartesi" << endl;
            break;
	    case 7:
            cout << "Pazar" << endl;
            break;
        default:
            cout << "Ge�ersiz giri� yapt�n�z. L�tfen 1 ile 7 aras�nda bir say� giriniz." << endl;
			break;
    }
    */

    /*
    int d;
	cout << "L�tfen toplanacak de�erlerin �st s�n�r�n� giriniz: \n";
	cin >> d;
	int toplam = 0;
    for (int i = 1; i <= d; i++) {
        toplam += i;
	}
    cout << "1'den " << d << "'e kadar olan say�lar�n toplam�: " << toplam << endl;
    */

    /*
	int k;                      //burada while d�ng�s� ile toplama i�lemi yap�lacak
    float t = 0;
	cout << "Tek say�lar�n �st s�n�r�: \n";
	cin >> k;
	int i1 = 1;
	while (i1 <= k)
    {
        t += i1;
        i1 += 2;
	}cout << "Sonu�: " << t << endl;

	int n;                      //burada do while d�ng�s� ile toplama i�lemi yap�lacak
	cout << "�ift say�lar�n �st s�n�r�n� belirleyin: \n";
	cin >> n;
	int i2 = 2;
    int toplam = 0;
    do
    {
		toplam += i2;
        i2 += 2;
    } while (i2 <= n);
	cout << "Sonu�: " << toplam << endl;

	int f;                      //burada form�l ile toplama i�lemi yap�lacak
	cout << "Bir tam say� giriniz: \n";
    cin >> f;
    if ( f % 2 != 0)
    {
        f--;
    }
	int top = (f / 2) * (2 + f) / 2;
	cout << "2'den " << f << "'e kadar olan �ift say�lar�n toplam�: " << top << endl;
	return 0;
    */

	/* Hesap makinesi �rne�i yap�lacak. 
    Detayl� ve yeni projede*/

    /*
    int yas;
	cout << "Ya��n�z� girin: \n";
    while (true)
    {
        cin >> yas;
		if (cin.fail() || cin.peek() != '\n'|| yas < 0) // verilan iki ko�uldan biri sa�lan�rsa hata mesaj� verilir.
        {
                cin.clear();
			    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Ge�ersiz ya� girdiniz. L�tfen ge�erli bir ya� giriniz: \n";
        }
        else
        {
			break; //d�ng�den ��kmay� sa�l�yor, yaz�lmazsa do�ru de�er girilse bile d�ng� devam eder.
        }
    } cout << (yas < 12 ? "�ocuksunuz." : (yas < 20 ? "Gen�siniz." : (yas < 65 ? "Yeti�kinsiniz." : "Ya�l�s�n�z ilerlemi� :)"))) << endl;
    */

    /*
    int k;
    while (true)
    {
        cout << "Bir tam say� giriniz: \n";
        cin >> k;

        if (cin.peek() != '\n') //Girilen de�erin bir tam say� olup olmad���n� kontrol et
        {
            cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ge�ersiz giri�. L�tfen bir tam say� giriniz." << endl;
			continue; //hatal� giri� yap�ld�k�a d�ng�n�n ba��na d�n
        }break; //d�ng�den ��kmay� sa�l�yor, yaz�lmazsa do�ru de�er girilse bile d�ng� devam eder.
    }

    if (k > 0)
    {
        cout << k << " say�s� pozitiftir." << endl;
    }
    else if (k < 0)
    {
        cout << k << " say�s� negatiftir." << endl;
    }
    else
    {
        cout << "S�f�r girdi�ini anlamayaca��m� m� sand�n ;)" << endl;
    }
	return 0;
    */

    /*
    //peki burada virg�ll� girilirse ne olacak? sorusuna cevap arad�k :)
    int a;
    while (true)           //kullan�c� ge�erli giri� yapana kadar devam et
    {
        cout << "Notunuzu giriniz: \n";
        cin >> a;
                            //Girilen notun 1 ile 5 aras�nda olup olmad���n� kontrol et
                            //cin.peek() bir sonraki karakteri kontrol eder ancak ak��tan kald�rmaz.
                            //Not giri�inde, tam say�dan sonra ba�ka bir karakter (�rne�in, . veya ,) olup olmad���n�
                            //kontrol etmek i�in kullan�l�r. Bu, yaln�zca tam say� giri�lerini kabul etmeyi sa�lar.
        if (cin.peek() != '\n' || a < 1 || a > 5)
        {
            cin.clear();    //hata bayra��n� temizle ve ak��� tekrar kullan�labilir yap
            cout << "Ge�ersiz not girdiniz. 1 ile 5 aras� not girmelisiniz.\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            //cin.ignore() giri� ak���ndaki fazla karakterleri temizler.
                            //Yaz�lmazsa d�ng� tekrar �al��t���nda, bu karakterler tekrar i�lenmeye �al���l�r
                            //ve program s�rekli olarak ayn� hatay� verir.
            continue;       //hata devam etti�i s�rece d�ng�n�n ba��na d�n. Yoksa switch'e ge�.
        }
          switch (a)
        {
        case 1:{
            cout << "Notunuz: �ok k�t�" << endl;
            break;
        }case 2:{
            cout << "Notunuz: K�t�" << endl;
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
            cout << "Notunuz: �ok iyi" << endl;
            break;
            }
        default: {
            cout << "Ge�ersiz not girdiniz." << endl;
            break;
            }
        }
        return 0;
    }*/

    /*int n,m;
	cout << "Bir tam say� giriniz: \n";
	cin >> n;
    m = (n < 0) ? -n : n;
	cout << "Mutlak de�eri: " << m << endl;*/

    /*int a, b, aci;
	double pi=3.14 , alan;
	cout << "ilk kenar uzunlu�unu giriniz: \n";
	cin >> a;
	cout << "ikinci kenar uzunlu�unu giriniz: \n";
	cin >> b;
	cout << "iki kenar aras�ndaki a��y� giriniz (derece): \n";
    cin >> aci;
    alan = (a * b * sin(aci * pi / 180)) / 2;
    cout << "��genin alan�: " << alan << endl;
	return 0;*/

    /*int a;
	cout << "Pozitif bir tam say� giriniz: \n";
	cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0) {
            cout << i << endl;
        }
    }*/

    /*
    int s;
    cout << "Pozitif bir say� giriniz: \n";
	cin >> s;
    if (s < 0)
    {
        cout << s << " Say�s� pozitif de�ildir." << endl;
		return 0;
    }
	for (int a = 1; a <= s; a++) {
        for (int b = a; b <= s; b++) {      // b'yi a'dan ba�latt�k, b�ylece tekrar eden �iftleri �nl�yoruz.
            if (a * a + b * b == s*s )
            {
                cout << s << " Say�s� " << a << " ve " << b << " 'nin kareleri toplam�n�n karek�k�ne e�ittir." << endl;
				return 0;
            }
        }
    }
    */
}