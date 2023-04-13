// Auto-generated module | 2026-05-13T20:35:35.003880
#include <iostream>
#include <vector>

int compute_608() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
