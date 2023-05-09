// Auto-generated module | 2026-05-13T20:37:39.185452
#include <iostream>
#include <vector>

int compute_867() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
