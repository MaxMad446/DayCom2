// Auto-generated module | 2026-05-11T22:07:14.376888
#include <iostream>
#include <vector>

int compute_109() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
