
include <iostream>
using namespace std;

int main() {
    int S;
    cin>>S;
    int RR,BB,MM;
    RR = ((S / 100) * 5)*100;
    BB = ((S / 50) * 2)*100;
    MM = (S * 0,03)*100;
    if(BB>RR && BB>MM)                               //y = RR; a = BB; o = MM
        cout<<"BB";
    else if(RR>BB && RR>MM)
        cout<<"RR";
    else if(MM>BB && MM>RR)
        cout<<"MM";
    else if(MM == BB == RR)
        cout<<"MM";
    return 0;
}
