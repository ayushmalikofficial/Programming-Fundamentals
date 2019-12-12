#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int tv,vc,rc,cd,tr;
cout<<setprecision(2);
float bill,tax,tbill;
cout<<"\Enter the total no. of TV's sold :";
cin>>tv;
cout<<"\Enter the total no. of VCR's sold :";
cin>>vc;
cout<<"\Enter the total no. of RemoteController's sold :";
cin>>rc;
cout<<"\Enter the total no. of CD Player's sold :";
cin>>cd;
cout<<"\Enter the total no. of Tape Recorder's sold :";
cin>>tr;
bill=(400*tv)+(220*vc)+(35.20*rc)+(300*cd)+(150*tr);
tax=((8.25*bill)/100);
tbill=tax+bill;
clrscr();
cout<<"\n\n\nQTY   DESCRIPTION                        UNITPRICE          TOTALPRICE";
cout<<"\n----  -------------                      ----------         -----------";
cout<<"\n"<<tv<<"      T.V                                400.00         \t"<<tv*400;
cout<<"\n"<<vc<<"      VCR                                220.00         \t"<<vc*220;
cout<<"\n"<<rc<<"      REMOTE CONTROLLER                   35.20         \t"<<rc*35.20;
cout<<"\n"<<cd<<"      CD PLAYER                          300.00         \t"<<cd*300;
cout<<"\n"<<tr<<"      TAPE RECORDER                      100.00         \t"<<tr*150;
cout<<"\n\n\n                                                             ----------";
cout<<"\n                                  \t\t  SUBTOTAL  : $"<<bill;
cout<<"\n                                  \t\t  SALES TAX : $"<<tax;
cout<<"\n                                  \t\t  TOTAL     : $"<<tbill;
getch();
}