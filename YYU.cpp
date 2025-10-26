

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main(){



    /*
    int t1, t2;
            //Deðerler kullanýcýdan alýnacaksa
    //cout << "Baþlangýç deðerlerini giriniz: \n";
    //cin >> t1;
    //cout << "2. deðeri girin: ";
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
	}cout << "t1 deðeri: " << t1 << "\n" << "t2 deðeri: " << t2 << endl;
	return 0;
    */

    /*
    int gunler;
    cout << "Lütfen bir sayý giriniz (1-7 arasý): \n";
	cin >> gunler;
    switch (gunler)
    {
        case 1:
            cout << "Pazartesi" << endl;
		    break;
        case 2:
			cout << "Salý" << endl;
            break;
		case 3:
            cout << "Çarþamba" << endl;
            break;
		case 4:
            cout << "Perþembe" << endl;
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
            cout << "Geçersiz giriþ yaptýnýz. Lütfen 1 ile 7 arasýnda bir sayý giriniz." << endl;
			break;
    }
    */

    /*
    int d;
	cout << "Lütfen toplanacak deðerlerin üst sýnýrýný giriniz: \n";
	cin >> d;
	int toplam = 0;
    for (int i = 1; i <= d; i++) {
        toplam += i;
	}
    cout << "1'den " << d << "'e kadar olan sayýlarýn toplamý: " << toplam << endl;
    */

    /*
	int k;                      //burada while döngüsü ile toplama iþlemi yapýlacak
    float t = 0;
	cout << "Tek sayýlarýn üst sýnýrý: \n";
	cin >> k;
	int i1 = 1;
	while (i1 <= k)
    {
        t += i1;
        i1 += 2;
	}cout << "Sonuç: " << t << endl;

	int n;                      //burada do while döngüsü ile toplama iþlemi yapýlacak
	cout << "Çift sayýlarýn üst sýnýrýný belirleyin: \n";
	cin >> n;
	int i2 = 2;
    int toplam = 0;
    do
    {
		toplam += i2;
        i2 += 2;
    } while (i2 <= n);
	cout << "Sonuç: " << toplam << endl;

	int f;                      //burada formül ile toplama iþlemi yapýlacak
	cout << "Bir tam sayý giriniz: \n";
    cin >> f;
    if ( f % 2 != 0)
    {
        f--;
    }
	int top = (f / 2) * (2 + f) / 2;
	cout << "2'den " << f << "'e kadar olan çift sayýlarýn toplamý: " << top << endl;
	return 0;
    */

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