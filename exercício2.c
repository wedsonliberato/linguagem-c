#include <stdio.h>

int main()
{
    float casas;
    float carros;
    
    printf("quantos carros eu tenho: ");
    
    scanf("%f", &casas);
    
    printf("quantas casas tenho: ");
    
    scanf("%f", & carros);
    
    if (casas <= carros){
      
        printf("quantidade de casas é =< a quantidade de carros");
        
    } else {
        
        printf("a quantidade de carros é >= a quantidade de casas");   
        
    }
    
    return 0;
}
