#include <iostream>
#include <cmath>


int main()
{
    float start; // начальная амплитуда
    float endd; // конечная амплитуда
    int count  = 0;

    

    std::cout << "Введите начальную амплитуду ";
    std:: cin >> start;
    std::cout << "Введите конечную амплитуду ";
    std:: cin >> endd;

    endd = round (endd * 100) / 100;

    while ( (start < endd) || endd < 0.0f || start < 0) {
        std::cout << "\n Введены некорректные данные. Повторите ввод\n\n";

        std::cout << "Введите начальную амплитуду ";
        std:: cin >> start;
        std::cout << "Введите конечную амплитуду ";
        std:: cin >> endd;
    }

    for ( ; start >= endd; ++count)
    {
        start = start - (start * 8.4f / 100.0f);
        start = floor (start * 100) / 100;

        if ( float temp = (round (start * 10) / 10)  == endd)
            break;

        std::cout << "start - "<<start << "   endd - "<<endd<<std::endl;
    }

    std::cout << "Количество колебаний - "<< count << std::endl; 

    return 0;


}