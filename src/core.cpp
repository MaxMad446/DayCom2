// Auto-generated module | 2026-05-13T20:32:46.381928
#include <iostream>
#include <vector>

int compute_534() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
