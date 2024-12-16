#include <iostream>
#include <cmath>

// так как в задании не указано, какого типа числа применять, программа создалась для условий, где вводятся целые числа

int main() {

    int file_mb; //размер файла
    int mb_per_sec; // скорость загрузки  
    float complete_load_mb = 0; // количество загрженных мб
    int time = 0;
    

    std::cout << "Введите размер обновления: \n";
    std::cin >> file_mb;
    std::cout << "Введите скорость соединения: \n";
    std::cin >> mb_per_sec;

    while (complete_load_mb < file_mb) 
    {

        if ( (file_mb - complete_load_mb) < mb_per_sec) 
        {
            mb_per_sec = file_mb - complete_load_mb;
        }

        complete_load_mb = complete_load_mb + mb_per_sec;
        ++time;

        std::cout << "Прошло: "<< time <<" сек. Скачано " << (int)complete_load_mb<<" из "<<file_mb<<" МБ ("<<(int)complete_load_mb*100/file_mb <<"%).\n";
    }

    return 0;


}