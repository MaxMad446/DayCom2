// Auto-generated module | 2026-05-11T20:56:52.378920
#include <iostream>
#include <vector>

int compute_570() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
