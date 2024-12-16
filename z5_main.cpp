#include <iostream>
#include <cmath>


int main()
{
    float dist, time_one_km; 
    float time_sum = 0.0f;

    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    std::cin >> dist;

    round(dist);

    if (dist == 0.0f)
        std::cout << "Программа завершена.";

    for (int i = 1; i <= dist; ++i) 
    {
        std::cout << "Какой у тебя был темп на километре "<<i<< " ? ";
        std::cin >> time_one_km;

        while (time_one_km <= 0.0f)
        {
            std::cout << "Значение времени не может быть меньше или равным 0. Поворите ввод в секундах\n";
            std::cin >> time_one_km;
        }

        time_sum = time_sum + time_one_km;
    }

    float midle_temp_minutes = round (time_sum / dist);   // вычисление среднего темпа (минуты)
    midle_temp_minutes = round ( midle_temp_minutes /60.0f * 100) / 100;

    float midle_temp_seconds = trunc (60 * (midle_temp_minutes - (int)midle_temp_minutes) ); // вычисление оставшихся секунд в среднем темпе

    std::cout << "Твой средний темп за тренировку: "<< trunc(midle_temp_minutes) <<" минут(-ы) "<< midle_temp_seconds << " секунд.";


    return 0;

}