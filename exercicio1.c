#include <stdio.h>

int main()
{
    int numero;
    
    printf("digite um número inteiro: ");
    
    scanf("%i", &numero);
    
    if (numero == 0){
    
        printf("o numero digitado é igual a 0");
        
       
    } else {
        
        if (numero > 0){
            
         printf("o numero digitado é positivo");  
         
            
        } else {
            
         printf("o numero digitado é negativo");   
            
        }   
        
    }

    return 0;
}
