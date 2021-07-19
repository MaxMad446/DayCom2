// Auto-generated module | 2026-05-11T20:23:26.394027
#include <iostream>
#include <vector>

int compute_263() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
