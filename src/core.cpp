// Auto-generated module | 2026-05-13T20:31:43.452848
#include <iostream>
#include <vector>

int compute_290() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
