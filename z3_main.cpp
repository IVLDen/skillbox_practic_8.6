#include <iostream>
#include <cmath>

int main() 
{

    float x, y, z, brusok_v;
    float cubes;
    float one_cube_v = 125.0f;

    std::cout << "Введите размеры бруска: \n";
    std::cout << "X: ";
    std::cin >> x;

    std::cout << "Y: ";
    std::cin >> y;

    std::cout << "Z: ";
    std::cin >> z;

    while (x < 5.0 || y < 5.0 || z < 5.0) 
    { 
    std::cout << "Размеры бруска должны быть не менее размера 5х5х5. Повторите ввод параметров \n";
    std::cout << "X: ";
    std::cin >> x;

    std::cout << "Y: ";
    std::cin >> y;

    std::cout << "Z: ";
    std::cin >> z;
    }

    brusok_v = x * y * z;
    cubes =  brusok_v / one_cube_v;

   int cubes_int = (int)cubes;
   int set = std::cbrt (cubes_int);
   
   std::cout <<"Из этого бруска можно изготовить "<<cubes_int<<" кубиков.\n";
   
   if (set  < 2)
   {
    std::cout << "Количества кубиков недостаточно, чтобы построить куб \n";
   }
   else {
    set = pow (set, 3); 
     std::cout <<"Из них можно составить набор из "<<set<< " кубиков.";
    }

    return 0;
}




