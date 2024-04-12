#include <iostream>


using namespace std;

int main () {
    int num1=0;

string dia,clase;
cout<<"¿que dia es hoy?";
cin>>dia;
cout<<"¿Hay clase?";
cin>>clase;

if(dia=="lunes"&& clase=="si"){
        num1=1;

}else if(dia=="martes" && clase=="si"){
    num1=1;
}else if(dia=="miercoles"&&clase=="si"){
    num1=1;
}else if(dia=="jueves"&&clase=="no"){
    num1=1;
}else if(dia=="jueves"&&clase=="si"){
    num1=2;
}else if(dia=="viernes"&&clase=="no"){
    num1=1;
}else if(dia=="viernes"&&clase=="si"){
    num1=3;
};

switch (num1){
case 1:
cout<<"no hay programacion";
break;
case 2:
cout<<"programacion con agustin de 14 a 16hs, luego con anna de 16 a 18hs";
break;
case 3:
cout<<"programacion con agustin de 14 a 16hs";
break;
default:
cout<<"¿sos salame?";
return 0;
}}
