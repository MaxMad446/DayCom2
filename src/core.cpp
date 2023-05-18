// Auto-generated module | 2026-05-13T20:38:25.807414
#include <iostream>
#include <vector>

int compute_327() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
