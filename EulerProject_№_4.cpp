/* Число-палиндром с обеих сторон (справа налево и слева направо) читается одинаково. Самое большое число-палиндром, полученное умножением двух двузначных чисел – 9009 = 91 × 99.

Найдите самый большой палиндром, полученный умножением двух трехзначных чисел */

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int LargestPalendrome(0);
    
    for (int i(999); i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            int product = i * j;
            
            std::string strNum = std::to_string(product);
            std::string reversedStrNum = std::string(strNum.rbegin(), strNum.rend());
            // Странно, что std::string reversedStrNum(strNum.rbegin(), strNum.rend()) отрабатывает ровно так же;
            if(strNum == reversedStrNum)
            {
                LargestPalendrome = std::max(LargestPalendrome, product);
                
            }
        }
    }
    
    std::cout << LargestPalendrome;
    
    return 0;
}
