// Auto-generated module | 2026-05-11T20:44:05.586235
#include <iostream>
#include <vector>

int compute_888() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
