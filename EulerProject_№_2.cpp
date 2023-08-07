#include <iostream>
#include <iomanip>

#define U unsigned int

U functionFIB(U & SUMMATOR, U a, U w);


int main()
{
    U SUMMATOR(0);
    U a = 2, w = 3;
    functionFIB(SUMMATOR, a, w);
    
    
    return 0;
}

U functionFIB(U & SUMMATOR, U a, U w)
{
    while(a != 4000000 || w != 4000000)
    {
        std::swap(a, w);
        a = a + w;
        if((a % 2 == 0) && (w % 2 == 0))
        {
            SUMMATOR = a;
        }
        
        
    }
    
    return SUMMATOR;
}
