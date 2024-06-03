// Auto-generated module | 2026-05-11T22:40:53.652260
#include <iostream>
#include <vector>

int compute_391() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_391() << std::endl;
    return 0;
}
