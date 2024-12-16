#include <iostream>
#include <cmath>

int main() 
{
    int hp, resist; // здоровье и сопротивляемость для ввода пользователем целыми значениями
    int damage; // урон для ввода пользователем целыми значениями

    std::cout << " Введите уровень здоровья и сопротивления орка в процентах \n";
    std::cin >> hp >> resist;

    while ( (hp < 0 || hp > 100) || (resist < 0 || resist > 100) ) {
        std::cout << "Здоровье и сопротивляемость орка не могут иметь отрицательные значения или быть больше ста процентов \n";
        std::cout << "Введите повторно уровень здоровья и сопротивления орка в процентах \n";
        std::cin >> hp >> resist;
    }

    if (hp == 0) {
         std::cout << "Орк погиб без сражения. Игра завершена.\n";
         return 0;
    }

    float fl_hp = (float)hp / 100.;            // перевод всех переменных в десятичные числа для расчетов
    float fl_resist = (float)resist / 100.;
    float fl_damage;
    float fl_final_damage; // урон после учета сопротивляемости


    while ( (fl_hp > 0.0) ) {
        std::cout << " Введите урон от шара в процентах от 0 до 100%. \n";

        std::cin >> damage;
        while (damage < 0 || damage > 100) {
              std::cout <<"Введите урон в диапазоне от 0 до 100% включительно \n";
              std::cin >> damage;
        }

        fl_damage = (float)damage / 100.;
        fl_final_damage = fl_damage - ( fl_damage * fl_resist);
        fl_hp = fl_hp - fl_final_damage;

        std::cout << "Урон: "<<fl_damage<< ", сопротивляемость: "<<fl_resist<< ", по орку будет нанесено: "<<fl_final_damage<< " урона.\n";
        if (fl_hp < 0.0)
            fl_hp = 0.0;
        std::cout << "Остаток здоровья орка: "<<fl_hp<<std::endl;
    }

    std::cout << "ОРК ПОБЕЖДЕН! \n";
    return 0;

    }





