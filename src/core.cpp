// Auto-generated module | 2026-05-12T21:13:26.567116
#include <iostream>
#include <vector>

int compute_263() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
