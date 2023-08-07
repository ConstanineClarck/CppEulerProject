/*
Простые делители числа 13195 - это 5, 7, 13 и 29.

Каков самый большой делитель числа 600851475143, являющийся простым числом?
*/

// Решаем с помощью решета эротосфена

#include <iostream>

void funcErotosphen(uint64_t Divider, bool *flags);
bool simpleDivider(bool flags[], int n, uint64_t Divider);

int main()
{
   int n(4);
   bool flags[n];
   for(int i(0); i <= n; i++)
   {
       flags[i] = false;
   }
   uint64_t Divider(600851475143/2);
   bool FLAG = false;
   int X = 1733;
   for(uint64_t i(Divider); i > X; i - 2, Divider - 2)
   {
       funcErotosphen(Divider, flags);
       FLAG = simpleDivider(flags, n, Divider);
       if(FLAG == true)
       {
           
           break;
       }
   }
   
   
   uint64_t RESULTAT = Divider;
   std::cout << RESULTAT;
   
   
    return 0;
}


void funcErotosphen(uint64_t Divider, bool *flags)
   {
       
       if(Divider % 2 != 0)
       {
           flags[0] = true;
           for(int i(3); i < 10; i + 2)
           {
               if(Divider % i != 0)
               {
                   flags[i - 2] = true;
               }
           }
           if(Divider % 9 != 0)
           {
               flags[4] = true;
           }
       }
       
   }
   
bool simpleDivider(bool flags[], int n, uint64_t Divider)
{
    int i(0);
    int it = 1;
    while(flags[i] == true)
    {
        it++;
        i++;
    }
    if(it == 5)
    {
        return true;
    }
    return false;
    
}
