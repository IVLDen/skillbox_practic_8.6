#include <iostream>
#include <cmath>

int main() 
{
    float f, m, s;
    int t;
    float a;

    std::cout << "Введите силу тяги в Ньютонах, массу звездолета и время в секундах \n";
    std::cin >> f>> m>> t;

    while (f <= 0 || m <=0 || t<0) {
        std::cout << "Cила тяги, масса Звездолета или время не могут иметь отрицательные значения \n";
        std::cout << "Введите повторно силу тяги в Ньютонах, массу звездолета и время в секундах \n";
        std::cin >> f>> m>> t;
    }

    std::cout << "Расчитываю ускорение и расстояние...\n";
    
    a = f/m;
    s = (a * pow(t, 2)) / 2;

    std::cout << "Расстояние S равно "<< s<<std::endl;



     return 0;
}