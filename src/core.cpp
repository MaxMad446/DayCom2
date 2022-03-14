// Auto-generated module | 2026-05-13T22:06:30.772706
#include <iostream>
#include <vector>

int compute_885() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
