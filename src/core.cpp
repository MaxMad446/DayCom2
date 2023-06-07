// Auto-generated module | 2026-05-13T20:46:53.062653
#include <iostream>
#include <vector>

int compute_234() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
