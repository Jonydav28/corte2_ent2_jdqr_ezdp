#include <iostream>
using namespace std;

class ParkingLot {
private:
    int espaciosGrandes;
    int espaciosMedianos;
    int espaciosPequenos;

public:

    ParkingLot(int g, int m, int p) {
        espaciosGrandes = g;
        espaciosMedianos = m;
        espaciosPequenos = p;
    }

    bool hayEspacio(int tipoAuto) {

        switch(tipoAuto) {

            case 1:
                if(espaciosGrandes > 0){
                    return true;
                }
                break;

            case 2:
                if(espaciosMedianos > 0){
                    return true;
                }
                break;

            case 3:
                if(espaciosPequenos > 0){
                    return true;
                }
                break;
        }

        return false;
    }

    void ocuparEspacio(int tipoAuto){

        if(tipoAuto == 1){
            espaciosGrandes = espaciosGrandes - 1;
        }
        else if(tipoAuto == 2){
            espaciosMedianos = espaciosMedianos - 1;
        }
        else if(tipoAuto == 3){
            espaciosPequenos = espaciosPequenos - 1;
        }

    }

    bool estacionarAuto(int tipoAuto){

        if(hayEspacio(tipoAuto)){
            ocuparEspacio(tipoAuto);
            return true;
        }

        return false;
    }

};

int main(){

    ParkingLot miParqueadero(1,1,0);

    bool resultado1 = miParqueadero.estacionarAuto(1);
    cout << "Intento 1: " << resultado1 << endl;

    bool resultado2 = miParqueadero.estacionarAuto(2);
    cout << "Intento 2: " << resultado2 << endl;

    bool resultado3 = miParqueadero.estacionarAuto(3);
    cout << "Intento 3: " << resultado3 << endl;

    bool resultado4 = miParqueadero.estacionarAuto(1);
    cout << "Intento 4: " << resultado4 << endl;

    return 0;
}