  //Если выписать все натуральные числа меньше 10, кратные 3 или 5, то получим 3, 5, 6 и 9. Сумма этих чисел равна 23.
  //Найдите сумму всех чисел меньше 1000, кратных 3 или 5
#include <iostream>

// Defines
// function
// CLasses

bool divader(int x);

int main()
{
    int summator = 0;
    for(int i(3); i < 1000; i++)
    {
        bool flag = divader(i);
        if(flag == true)
        {
            summator += i;
        };
        
    }
    
    
    std::cout << summator;
    
    
    return 0;
}

bool divader(int x)
    {
        
        if(x % 5 && x % 3)
        {
            return false;
        };
        
        return true;
    }
