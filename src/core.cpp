// Auto-generated module | 2026-05-13T22:05:34.142286
#include <iostream>
#include <vector>

int compute_234() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
