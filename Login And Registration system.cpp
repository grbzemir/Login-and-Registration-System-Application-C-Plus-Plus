#include<iostream>
#include<fstream>
#include<string.h>


using namespace std;


void login();

void registration();

void forgot_password();

int main()

{
     
    int secim;

    cout<<"\t\t\t____________________________________________________________________\n\n\n";
    cout<<"\t\t\t____________________ MERHABA HOSGELDINIZ ____________________________\n\n\n";
    cout<<"\t\t\t___________________    GIRIS EKRANI     ____________________________\n\n\n";
    cout<<"\t\t\t___________________       MENU          ____________________________\n\n\n";
     
    cout<<"\t\t\t____________________________________________________________________\n\n\n";
    cout<<"\t\t\t___________________ [1] Giris Yap        ____________________________\n\n\n";
    cout<<"\t\t\t___________________ [2] Kayit Ol         ____________________________\n\n\n";
    cout<<"\t\t\t___________________ [3] Sifremi Unuttum   ____________________________\n\n\n";
    cout<<"\t\t\t___________________ [0] Cikis            ____________________________\n\n\n";
    cout<<"\t\t\t____________________________________________________________________\n\n\n";

    cout<<"\t\t\tSeciminizi Giriniz: ";
    cin>>secim  ;
    cout<<endl;

    
   switch (secim)

   {

    case 1:

    login();
    break;

    case 2:

    registration();
    break;

    case 3:

    forgot_password();
    break;

    case 0:

    cout<<"\t\t\tCikis Yapiliyor...";
    break;

    default:

    system("cls");

    cout<<"\t\t\tHatali Secim Yaptiniz. Lutfen Tekrar Deneyiniz.\n\n\n";

    main();
    
   }

}

   void login()
   
   {
   
   
   int sayac;
   
   system("color B");

   string kullanici_adi;
   string sifre;
   string isim;
   string gecis;

   system("cls");

    cout<<"\t\t\t Lutfen Kullanici Adinizi Giriniz: ";
    cin>>kullanici_adi;
     
    cout<<"\t\t\t Lutfen Isminizi Giriniz: ";
    cin>>isim;

    cout<<"\t\t\t Lutfen Sifrenizi Giriniz: ";
    cin>>sifre;
    
    ifstream dosyaoku("kullanici.txt");

    while (dosyaoku >> isim >> gecis)

    {

        if (isim == kullanici_adi && gecis == sifre)

        {

            sayac=1;
            system("cls");
            cout<<"\t\t\t Giris Basarili. Yonlendiriliyorsunuz...";
     
      }

    }


    dosyaoku.close();

    if(sayac == 1)

    {

        cout<<kullanici_adi<<"\n Giris basarılı \n Tesekkurler giris yaptiginiz icin \n" ;
        main();

    }

     else

     {
        cout<<"\t\t\t Giris Basarisiz. Lutfen Tekrar Deneyiniz.\n\n\n";
        main();

     }

 

}




    void registration()

    {

        string kullanici_adi2;
        string sifre2;
        string isim2;
        string gecis2;

        system("cls");

        cout<<"\t\t\t Lutfen Kullanici Adinizi Giriniz: ";
        cin>>kullanici_adi2;

        cout<<"\t\t\t Lutfen Isminizi Giriniz: ";
        cin>>isim2;

        cout<<"\t\t\t Lutfen Sifrenizi Giriniz: ";
        cin>>sifre2;

        ofstream dosyaoku1("kullanici.txt",ios::app);
        
        dosyaoku1<<kullanici_adi2<<" "<<sifre2<<endl;

        system("cls");

        cout<<"\t\t\t Kayit Basarili. Yonlendiriliyorsunuz...";

        dosyaoku1.close();

        main();


}



    void forgot_password()

    {

        int option;
        system("cls");
        
        cout<<"\t\t\t Sifrenizi Unuttunuz mu?\n\n\n";
        cout<<"\t\t\t [1] Ismimi ve kullanici adimi ara\n\n\n";
        cout<<"\t\t\t [2] Menuye Geri Don\n\n\n";
        cout<<"\t\t\t Seciminizi Giriniz: ";
        cin>>option;

        switch (option)

        {

        case 1:

        {

        

        int sayac=0;
        string kullanici_adi3;
        string isim3;
        string gecis3;

        

        cout<<"\t\t\t Lutfen Hatirladiginiz Kullanici Adinizi Giriniz: ";
        cin>>kullanici_adi3;

        ifstream dosyaoku2("kullanici.txt");

        while ( dosyaoku2 >>isim3>>gecis3)

        {

            if (isim3==kullanici_adi3)

            {

                sayac=1;

                
            }
            
        }

        dosyaoku2.close();

        if (sayac==1)

        {

            cout<<"\t\t\t Kullanici Adiniz Bulundu. ";
            cout<<"\t\t\t Sifreniz :"<<gecis3;
            main();
            
        }

        else

        {

            cout<<"\t\t\t Kullanici Adiniz Bulunamadi. Lutfen Tekrar Deneyiniz.";
            main();
            
            
        }

        break;

    }

    case 2:

    {

        main();
        
    }

    default:

    cout<<"\t\t\t Hatali Secim Yaptiniz. Lutfen Tekrar Deneyiniz.";
    forgot_password();

    }


    }

    


    
