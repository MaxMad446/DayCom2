// Auto-generated module | 2026-05-12T04:36:08.233229
#include <iostream>
#include <vector>

int compute_914() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
