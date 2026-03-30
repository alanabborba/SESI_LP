#include <stdio.h>

int main(){
    float N1, N2, N3, media;
    
    printf("Digite uma nota:");
    scanf("%f", &N1);
    
    printf("Digite outra nota:");
    scanf("%f", &N2);
    
    printf("Digite mais uma nota:");
    scanf("%f", &N3);
    
    media = (N1 + N2 + N3) / 3;
    
   
   if(media>=7.0){;
       printf("APROVADO");
  }else if(media<=2.9){;
      printf("REPROVADO");
  }else{;
      printf("RECUPERAÇÃO");
  }
}