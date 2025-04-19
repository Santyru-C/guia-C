# include <stdio.h>
# include <stdint.h>

int main(){
    int8_t memoria[3] = {1,2,-3};
    uint8_t *x = (uint8_t*) memoria;
    int8_t *y = x + 2;
    
    printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
    printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
}

// Interesante que el nombre de el array se refiera a la direccion del primer
// elemento de este, puede llegar a ser bastante util.