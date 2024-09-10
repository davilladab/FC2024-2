/// Mi primer programa
#include<iostream>
using namespace std;

int main(){
    float resistividad, area, longitud, resistencia;
    resistividad=10.4;
    area=500;
    longitud=125;
    resistencia=(resistividad*longitud)/area;

    cout<< "La resistencia del alambre en Ohmios es " <<
        resistencia << endl;

    return 0;


}