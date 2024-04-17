// Auto-generated module | 2026-05-11T22:34:49.906874
#include <iostream>
#include <vector>

int compute_885() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
