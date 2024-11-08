#include <iostream>
#include "Sequence.h"

int main() {
    Sequence seq;
    seq.readFasta("C:/Users/emilk/c++/obiektowe/example.fasta");
    seq.print();

    return 0;
}
