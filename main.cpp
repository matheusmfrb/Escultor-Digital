#include <iostream>
#include <fstream>
#include <string>
#include "Voxel.h"
#include "Sculptor.h"

using namespace std;

int main(){
    string filename = "escultor.off";
    Sculptor figura(10,10,10);
    figura.setColor(0,1,0,1);
    figura.putVoxel(0,0,0);
    figura.writeOFF(filename);
    return 0;
}
