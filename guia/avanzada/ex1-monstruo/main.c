#include <stdio.h>

struct monstruo {
    char* nombre;
    int vida;
    double ataque, defensa;
};

void print_monsters(struct monstruo arr[]) {
    struct monstruo monstruo_actual;

    for (int i = 0; i < 3; i++) {
        monstruo_actual = arr[i];
        printf("monstruo: %s, vida: %d, ataque: %f, defensa: %f\n", 
            monstruo_actual.nombre,
            monstruo_actual.vida,
            monstruo_actual.ataque,
            monstruo_actual.defensa);
    };
}

void evolve(struct monstruo* m) {
    m->ataque = m->ataque + 10;
    m->defensa = m->defensa + 10;
}

int main() {
    struct monstruo lista_de_monstruos[] = {
        {"Mike", 0, 0.0, 0.0},
        {"Sullivan", 1, 1.1, 1.1},
        {"Randall", 2, 2.2, 2.2}
    };
    
    print_monsters(lista_de_monstruos);
    evolve(&lista_de_monstruos[0]);
    print_monsters(lista_de_monstruos);
}