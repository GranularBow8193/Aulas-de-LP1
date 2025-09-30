#include <stdio.h>

enum Dia{
    
  dom, seg, ter, qua, qui, sex, sab
    
};

char* nome (enum Dia hoje){
    
    if(hoje == dom){return "Domingo";}
    if(hoje == seg){return "Segunda";}
    if(hoje == ter){return "Terça";}
    if(hoje == qua){return "Quarta";}
    if(hoje == qui){return "Quinta";}
    if(hoje == sex){return "Sexta";}
    if(hoje == sab){return "Sábado";}

}
int main() {
    printf("%s\n", nome(qua));
    return 0;
}
