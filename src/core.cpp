// Auto-generated module | 2026-05-11T21:47:42.586669
#include <iostream>
#include <vector>

int compute_290() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
