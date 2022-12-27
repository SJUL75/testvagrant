#include <iostream>
using namespace std;
int main()
{
    int toi=26;,ht=18,hindu=20.5,et=34,bm=10.5,y=0;
    
    do{
    int inp=0;
    cin>>inp;
    if (toi+ht<inp)
        cout<<"ToI,HT\n";
    if (toi+hindu<inp)
        cout<<"ToI,Hindu\n";
    if (toi+et<inp)
        cout<<"ToI,ET\n";
    if (toi+bm<inp)
        cout<<"ToI,BM\n";
    if (ht+hindu<inp)
        cout<<"HT,Hindu\n";
    if (ht+et<inp)
        cout<<"HT,ET\n";
    if (ht+bm<inp)
        cout<<"HT,BM\n";
    if (et+hindu<inp)
        cout<<"ET,Hindu\n";
    if (et+bm<inp)
        cout<<"ET,BM\n";
    if (bm+hindu<inp)
        cout<<"BM,Hindu\n";
    cout<<"do u want to continue? (1/0)";
    cin>>y;
    }while(y=1);  
    return 0;
}
