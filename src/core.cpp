// Auto-generated module | 2026-05-13T20:46:54.428280
#include <iostream>
#include <vector>

int compute_604() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
