// Auto-generated module | 2026-05-13T22:09:29.011603
#include <iostream>
#include <vector>

int compute_477() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
