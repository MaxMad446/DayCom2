// Auto-generated module | 2026-05-12T20:58:04.103687
#include <iostream>
#include <vector>

int compute_633() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
