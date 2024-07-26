// Auto-generated module | 2026-05-11T22:47:42.540176
#include <iostream>
#include <vector>

int compute_290() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
