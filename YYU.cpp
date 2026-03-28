

#include <iostream>
#include <cmath>
#include <limits>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

// 19.12.2025 icin
/*
// main disi tanýmlamalar
int topla(int a, int b) {
    return a + b;
}
void mesajYaz() {
    cout << "Merhaba! Bu bir fonksiyon mesajidir.\n";
}
void carpimYap(int a, int b, int& sonuc) {
    sonuc = a * b; //referasn ile dondurdugumuz icin disarida degisir
}
int kuvvet(int taban, int us = 2) {
    return pow(taban, us);
}
int kare(int x) {
    return x * x;
}
double kare(double x) {
    return x * x;
}
void menu() {
    cout << "\n----- FONKSIYON ORNEKLERI MENUSU -----\n";
    cout << "1 - toplama (deger donduren fonksiyon)\n";
    cout << "2 - mesajYaz (void fonksiyon)\n";
    cout << "3 - carpma (referans ile parametre gecme)\n";
    cout << "4 - kuvvet alma (varsayilan parametre)\n";
    cout << "5 - kare hesaplama (overloading)\n";
    cout << "0 - cikis\n";
    cout << "seciminiz: ";
}
*/

int N; // evrensel olarak tanýmladýk ki main gibi diðer fonksiyonlarda da kullanabilelim

int main(){












    cout << "--------------\n\n";
    // 19.12.2025 Lab
    /*
    int secim;
    do
    {
        menu();
        cin >> secim;
        if (secim == 1)
        {
            int x, y;
            cout << "iki sayi giriniz: ";
            cin >> x >> y;
            cout <<"Toplam = " << topla(x, y) << "\n";
        }
        else if (secim == 2)
        {
            mesajYaz();
        }
        else if (secim == 3)
        {
            int x, y, sonuc;
            cout << "iki sayi giriniz: ";
            cin >> x >> y;
            carpimYap(x, y, sonuc);
            cout << "carpim sonucu = " << sonuc << "\n";
        }
        else if (secim == 4)
        {
            int t, u;
            cout << "taban giriniz: ";
            cin >> t;
            cout << "us giriniz (bos birakmak icin -1 giriniz): ";
            cin >> u;
            if (u == -1)
            {
                cout << "sonuc = " << kuvvet(t) << "(varsayilan us=2 kullanildi)\n";
            }
            else
            {
                cout << "sonuc = " << kuvvet(t, u) << "\n";
            }
        }
        else if (secim == 5)
        {
            double s;
            cout << "bir sayi giriniz: ";
            cin >> s;
            cout << "karesi = " << kare(s) << "\n";
        }
        else if (secim == 0)
        {
            cout << "programdan cikiliyor...\n";
        }
        else
        {
            cout << "gecersiz secim! tekrar deneyin.\n";
        }
    } while (secim != 0);
    return 0;
    */
    // 12.12.2025 Lab
    /*
    // #include <iostream>, #include <string>, #include <algorithm> transform için,using namespace std;
    cout << "----- C+ STRING METIN DUZENLEME ORNEKLERI -----\n\n";
    
    // 1. append - metin ekleme
    string text = "C++ String ";
    cout << "Baslangic metni: " << text << "\n";
    text.append("Islemleri");
    cout << "append() sonrasi: " << text << "\n";
    text += " Ornegi";
    cout << "operator += sonrasi: " << text << "\n";
    
    // 2. insert - metin ortasýna ekleme
    text.insert(4, " gelismis");
    cout << "insert() sonrasi: " << text << "\n";
    
    // 3. erase - karakter silme
    text.erase(4, 8); //4. insisten itibaren 8 karakter sil
    cout << "erase() sonrasi: " << text << "\n";
    
    // 4. replace - parca degistirme
    text.replace(0, 3, "Modern");//ilk 3 karakter "Modern" ile degistirildi
    cout << "replace() sonrasi: " << text << "\n\n";
    
    // 5. substr - alt metin alma
    string alt = text.substr(0, 6);
    cout << "substr(0,6) -> " << alt << "\n\n";
    
    // 6. find - metin arama
    cout << "find(\"String\") -> ";
    size_t pos = text.find("String");
    if (pos != string::npos)
    {
        cout << "Bulundu! Index = " << pos << "\n";
    }
    else
    {
        cout << "Bulunamadi.\n";
    }
    // sondan arama
    size_t rpos = text.rfind("i");
    cout << "rind('i') -> sondan bulunan index: " << rpos << "\n\n";
    
    // 7. compare - iki string kiyaslama
    string a = "elma";
    string b = "armut";
    int cap = a.compare(b);
    cout << "compare(\"elma\",\"armut\") karsilastirmasi -> ";
    if (cap == 0) 
    {
        cout << "esit\n";
    }
    else if (cap < 0)
    {
        cout << "elma < armut\n";
    }
    else
    {
        cout << "elma > armut\n";
    }
    
    // 8. swap - stringleri yer degistirme
    cout << "swap oncesi: a=" << a << ", b=" << b << "\n";
    a.swap(b);
    cout << "swap sonrasi: a=" << a << ", b=" << b << "\n";
    
    // 9. karakter donusumleri (toupper - tolower)
    string lower = "c++ string ornekleri";
    string upper = lower;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "toupper -> " << upper << "\n";
    transform(upper.begin(), upper.end(), upper.begin(), ::tolower);
    cout << "tolower -> " << upper << "\n\n";
    
    // 10. replace ile genis ornek (tum bosluklari '_' yapma)
    string metin = "C++ metin duzenleme fonksiyonlari";
    for (size_t i = 0; i < metin.size(); i++)
    {
        if (metin[i] == ' ')
            metin.replace(i, 1, "_");
    }
    cout << "boluklari '_' ile degistirildi: " << metin << "\n";
    return 0;
    */
    // 05.12.2025 Lab
    /*
    cout << "----- C++ STRING ve ERISIM FONKSIYONLARI -----\n\n";
    string text = "C++ String Bellek Erisim Yonetimi";
    // 2) temel Bellek Fonksiyonlari
    cout << "Size()     -> Eleman sayisi            :" << text.size() << "\n";
    cout << "length()   -> Eleman sayisi(aynisi)    :" << text.length() << "\n";
    cout << "Capacity() -> Ayrilan kapasite         :" << text.capacity() << "\n";
    cout << "max_size() -> Alabilecegi maks boyut   :" << text.max_size() << "\n\n";
    // 3) reserve() - kapasite arttirma
    cout << "reserve(100) ile kapasiteyi 100'e cikarma...\n";
    text.reserve(100);
    cout << "yeni capacity() :" << text.capacity() << "\n";
    // 4) shrink-to-fit() - bos kapasiteyi temizleme
    cout << "shrink-to-fit() bos kapasite temizleme...\n";
    text.shrink_to_fit();
    // 6) elemanlara erisim yöntemleri
    cout << "text[0]    ->  operator[] ile ilk karakter :" << text[0] << "\n";
    cout << "text.at(0) ->  at() ile ilk karakter       :" << text.at(0) << "\n";
    cout << "front()    ->  ilk karakter                :" << text.front() << "\n";
    cout << "back()     ->  son karakter                :" << text.back() << "\n\n";
    // at ile tasma hatasi yakalama
    try
    {
        cout << "text.at(500)->guvenli erisim testi:\n";
        cout << text.at(500) << "\n"; //hata olusturur
    }
    catch (const out_of_range & e)
    {
        cout << "HATA! at() tasma yakaladi ->" << e.what() << "\n\n";
    }
    for (size_t i = 0; i < text.size(); i++)
    {
        cout << text[i] << "_";
    }
    cout << "\n";
    // 9) push_back() ve pop_back()
    cout << "push_back('_') karakter ekleme...\n";
    text.push_back('_');
    cout << "sonuc: " << text << "\n";
    cout << "pop_back son karakter silme...\n";
    text.pop_back();
    cout << "sonuc: " << text << "\n";
    // 10) clear() ve empty()
    cout << "clear string'i bosaltma...\n";
    text.clear();
    cout << "empty()    ->" << (text.empty() ? "string bos" : "string bos degil") << "\n";
    cout << "size()     ->" << text.size() << "\n";
    cout << "capacity(), clear sonrasi dahi korunur!    ->" << text.capacity() << "\n\n";
    */
    // 28.11.2025 Lab
    /*
    //#include <fstream>
    //#include <string>
    //bu blokta, projenin konumunda sayi.txt diye bir dosya oluþturup içine 0 dan 9'a kadar sayýlarý 
    //alt alta yazarak toplamlarýný ve ortalamasýný aldýk.
    ofstream yaz("sayi.txt");
    for (int i = 0; i < 10; i++)
    {
        yaz << i << endl;
    }
    yaz.close();
    ifstream oku("sayi.txt");
    double sayi, toplam = 0;
    double ortalama = 0.0;
    while (oku>>sayi)
    {
        toplam += sayi;
    }
    ortalama = toplam / 10;
    cout << "sayilarin toplami = " << toplam << endl;
    cout << "ortalama = " << ortalama << endl;
    

    //bu blokta dene.txt oluþturup içine deger giriyoruz
    ofstream dosya("dene.txt", ios::app);
    int adet;
    cout << "kac adet sinav notu gireceginizi belirtiniz: " << endl;
    cin >> adet;
    if (!dosya)
    {
        cout << "dosya bulunamadi." << endl;
    }
    int x, i = 1;
    while (i <= adet)
    {
        cout << "deger giriniz: " << endl;
        cin >> x;
        dosya << x << endl;
        i++;
    }
    dosya.close();

    //bu blokta dene.txt dosyasýný kontrol ediyor, varsa içindeki satýrlarý yazýdýrýyor
    ifstream dosya1("dene.txt");
    string satir;
    if (dosya1.good())
    {
        cout << "dosya mevcut.\n";
    }
    else if (!dosya1)
    {
        cout << "dosya bulunamadi.\n";
    }
    int sira = 1;
    while (getline(dosya1, satir))
    {
        cout << sira << ". satir: " << satir << endl;
        sira++;
    }
    dosya1.close();
    return 0;
    */
    // 21.11.2025 ders ifstream ve ofstream islendi
    // 14.11.2025 vize haftasi
    // 07.11.2025 Lab
    /*
    bool kontrol = true;
    int secim = 0;
    int dizi[5];
    while (kontrol)
    {
        system("CLS");
        cout << "--------------------   MENU    ------------------" << endl;
        cout << "-------diziyi doldur                   (1)-------" << endl;
        cout << "-------diziyi tersine cevir            (2)-------" << endl;
        cout << "-------karesini al yeni bir diziye ekle(3)-------" << endl;
        cout << "-------cift degerleri topla            (4)-------" << endl;
        cout << "-------cikis                           (5)-------" << endl;
        cin >> secim;
        if (secim==1)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "dizinin " << (i + 1) << ". siradaki elemani giriniz\n";
                cin >> dizi[i];
            }
            for (int j = 0; j < 5; j++)
            {
                cout << dizi[j] << "--";
            }
            system("pause");
        }
        else if (secim==2)
        {
            for (int j = 4; j >= 0; j--)
            {
                cout << dizi[j] << "--";
            }
            system("pause");
        }
        else if (secim==3)
        {
            int yenidizi[5];
            for (int i = 0; i < 5; i++)
            {
                yenidizi[i] = dizi[i] * dizi[i];
                cout << yenidizi[i] << "--";
            }
            system("pause");
        }
        else if (secim==5)
        {
            kontrol = false;
        }
        else if (secim==4)
        {
            int toplam_t = 0, toplam_c = 0, s_t = 0, s_c = 0;
            for (int i = 0; i < 5; i++)
            {
                if ((dizi[i] % 2) == 0)
                {
                    toplam_c += dizi[i];
                    s_c++;
                }
                else
                {
                    toplam_t += dizi[i];
                    s_t++;
                }
            }
            cout << "girilen degerlerden " << s_c << " tane cift sayi var ve toplamlari= " << toplam_c << endl;
            cout << "girilen degerlerden " << s_t << " tane tek sayi var ve toplamlari= " << toplam_t << endl;
            system("pause");
        }
        else
        {
            cout << "girilen islem hatalidir (1-4)" << endl;
            system("pause");
        }
    }
    */
    // 07.11.2025 ders
    /*
    //#include <cmath>
    int boyut=5, enB, enK, alt_t, ust_t; //boyut disaridan alinamadigi icin sabit verildi, asagisi yorum satirina donustuurldu.
    float karekok, ortalama;
    //cout << "Boyut gir: " << endl;
    //cin >> boyut;
    //int matris[boyut][boyut];
    //int kosegen[boyut];
    int matris[5][5];
    int kosegen_dizi[5];
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            cin >> matris[i][j];
        }
    }
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            if (i == j)
            {
                kosegen_dizi[i] = matris[i][j];
            }
        }
    }
    enB = kosegen_dizi[0] = 3;
    enK = kosegen_dizi[0] = 3;
    for (int i = 1; i < boyut; i++)
    {
        if (kosegen_dizi[i] > enB)
        {
            enB = kosegen_dizi[i];
        }
        else if (kosegen_dizi[i] < enK)
        {
            enK = kosegen_dizi[i];
        }
    }
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            if ((i != j) && (i > j))
            {
                alt_t += matris[i][j];
            }
            else if ((i != j) && (i < j))
            {
                ust_t += matris[i][j];
            }
        }
    }
    ortalama = (alt_t + ust_t) / 2;
    karekok = sqrt(ortalama);

    //kosegen matris ile yedek kosegen matris yer degistirme
    //nasil yapidigini ogren, defterde yazilan ornek calismadi
    */

    /*
	//karekök için #include <cmath> kütüphanesini ekledik
	int boyut;
	cout << "Matrisin boyutunu giriniz: \n";
	cin >> boyut;
	
	//!!Dinamik olarak matris ve köþegen dizisi tanýmlamasý, en sonda bellekten sileceðiz
	int** matris = new int* [boyut]; // dinamik kare matris tanýmlamasý
	for (int i = 0; i < boyut; i++) {
		matris[i] = new int[boyut];
	}
	int* kosegen = new int[boyut]; // köþegen elemanlarý için dinamik dizi tanýmlamasý

	//Derste aþaðýdaki gibi yapýldý ancak c++'ta bu þekilde tanýmlama yok.
    //int matris[boyut][boyut]; // kare matris tanýmlamasý
	//int kosegen[boyut]; // köþegen elemanlarý için dizi tanýmlamasý

    cout << "Matrisin elemanlarýný giriniz: \n";
	for (int i = 0; i < boyut; i++) {
		for (int j = 0; j < boyut; j++) {
			//i+1 ve j+1 indisleri ile deðil,böyle daha anlaþýlýr buluyorum
            cout << "Matris[" << i << "][" << j << "]: \n";
			cin >> matris[i][j];
		}
	}

	// köþegen elemanlarýný bulma
	for (int i = 0; i < boyut; i++) {
		kosegen[i] = matris[i][i];
	}

	int enbuyuk = kosegen[0], enkucuk = kosegen[0];
	for (int i = 1; i < boyut; i++) {
		if (kosegen[i] > enbuyuk) {
            enbuyuk = kosegen[i];
		}
        else if (kosegen[i] < enkucuk) {
            enkucuk = kosegen[i];
        }
	}

	double alt_toplam = 0, ust_toplam = 0;
	int alt_eleman = 0, ust_eleman = 0;
	for (int i = 0; i < boyut; i++) {
		for (int j = 0; j < boyut; j++) {
			if (i > j) { // alt üçgen elemanlarý
                alt_toplam += matris[i][j];
                alt_eleman++;
            }
			else if (i < j) { // üst üçgen elemanlarý
                ust_toplam += matris[i][j];
                ust_eleman++;
			}
		}
	}

    double alt_ortalama = alt_eleman > 0 ? alt_toplam / alt_eleman : 0;
	double ust_ortalama = ust_eleman > 0 ? ust_toplam / ust_eleman : 0;
    double alt_karekok = sqrt(alt_ortalama);
	double ust_karekok = sqrt(ust_ortalama);
    
    cout << "\nKöþegen elemanlarý               : ";
	for (int i = 0; i < boyut; i++) {
		cout << kosegen[i] << " ";
	}
	
    cout << "\nEn   büyük köþegen elemaný        : " << enbuyuk;
	cout << "\nEn   küçük köþegen elemaný        : " << enkucuk;
	cout << "\nAlt  üçgen ortalamasý             : " << alt_ortalama;
	cout << "\nAlt  üçgen ortalamasýnýn karekökü : " << alt_karekok;
	cout << "\nÜst  üçgen ortalamasý             : " << ust_ortalama;
	cout << "\nÜst  üçgen ortalamasýnýn karekökü : " << ust_karekok;

	//!!Dinamik olarak doldurduðumuz dizileri ve matrisleri bellekten temizleme
    for (int i = 0; i < boyut; i++)
    {
		delete[] matris[i]; // her satýrý sil
    }
	delete[] matris; // satýr iþaretçilerini sil
	delete[] kosegen; // köþegen dizisini sil

	return 0;
    */

    /*
    //evrensel N deðiþkenini burada kullandýk
	cout << "Dizinin boyutunu giriniz: \n";
	cin >> N;
	int* A = new int[N]; // dinamik dizi tanýmlamasý

	for (int i = 0; i < N; i++) {
		cout << "Dizinin " << i + 1 << ". elemanýný giriniz: \n";
		cin >> A[i];
	}
	cout << "Dizinin elemanlarý: \n";
	for (int i = 0; i < N; i++) {
        cout << "A(" << i + 1 << ") = " << A[i] << endl;
        
	} 
    delete[] A; // dinamik diziyi bellekten temizleme
    return 0;
    */
    
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
