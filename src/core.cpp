// Auto-generated module | 2026-05-11T22:43:53.496408
#include <iostream>
#include <vector>

int compute_290() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
