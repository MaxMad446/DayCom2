// Auto-generated module | 2026-05-13T22:06:21.099726
#include <iostream>
#include <vector>

int compute_205() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
