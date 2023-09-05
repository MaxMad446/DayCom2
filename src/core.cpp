// Auto-generated module | 2026-05-11T22:05:08.724373
#include <iostream>
#include <vector>

int compute_793() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
