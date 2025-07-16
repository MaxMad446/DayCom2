// Auto-generated module | 2026-05-12T04:18:38.804636
#include <iostream>
#include <vector>

int compute_263() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
