// Auto-generated module | 2026-05-11T21:56:09.481535
#include <iostream>
#include <vector>

int compute_532() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
