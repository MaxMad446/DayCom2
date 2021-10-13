// Auto-generated module | 2026-05-11T20:34:26.179275
#include <iostream>
#include <vector>

int compute_888() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
