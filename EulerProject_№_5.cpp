/* 
2520 - самое маленькое число, которое делится без остатка на все числа от 1 до 10.

Какое самое маленькое число делится нацело на все числа от 1 до 20?
*/
#include <iostream>

bool Div(int &resultat, bool found);


int main()
{
    int resultat = 2521;
    bool found = false;
    
    while(!found)
    {
        
        
        found = Div(resultat, found);
        
    }
    std::cout << resultat;
    
    return 0;
}


bool Div(int &resultat, bool found)
{
    bool DIVISIBLE = true;
    for(int i(1); i <= 20; i++)
    {
        if(resultat % i != 0)
        {
            DIVISIBLE = false;
            break; 
        }
    }
    if(DIVISIBLE)
    {
        found = true;
        return found;
    }
    else
    {
        resultat++;
        return found;
    }
}
