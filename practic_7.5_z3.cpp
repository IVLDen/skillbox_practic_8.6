
// Исправленное задание 3 из практической работы 7.5 ("Красный Марс") 

#include <iostream>

int main() {
       
            int width = 6, longitude = 10;
            char movin;
            
            do 
            { 
            std::cout << "Марсоход находится на позиции "<< width<<","<< longitude<< ".Введите любую из четырех клавиш для перемещения (для завершения перемещения нажмите q): ";
            std::cin >> movin;

            if (movin == 'w') 
              {
                     if (longitude == 20)
                            continue;
                     else
                           longitude = longitude + 1; 
                     
              }

              else if (movin == 's') 
              {
                     if (longitude == 0)
                            continue;
                     else
                           longitude = longitude - 1; 
                     
              }

              else if (movin == 'a') 
              {
                     if (width == 0)
                            continue;
                     else
                           width = width - 1; 
                     
              }

              else if (movin == 'd') 
              {
                     if (width == 15)
                            continue;
                     else
                           width = width + 1; 
                     
              }

              else if (movin == 'q')
                     break;
              
              else  {
                      std::cout << "Некорректные данные. Повторите ввод\n";
                      continue;
              }
            

            } while ( movin != NULL) ;
              
            std::cout << "Конечная позиция Марсохода: "<<width<<", "<<longitude<<std::endl;
            return 0;
}