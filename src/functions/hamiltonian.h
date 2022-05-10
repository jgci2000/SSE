#ifndef HAMILTONIAN_H
#define HAMILTONIAN_H

#include <stdlib.h>

struct H_term {
    double value;
    int si_p;
    int sj_p;
    int si_p_1;
    int sj_p_1;
};

struct H_term **create_hamiltonian(double J, double delta, double h, double C);

#endif // HAMILTONIAN_H

