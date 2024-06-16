// Auto-generated module | 2026-05-11T22:42:28.029337
#include <iostream>
#include <vector>

int compute_398() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
