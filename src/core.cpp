// Auto-generated module | 2026-05-11T22:17:02.382696
#include <iostream>
#include <vector>

int compute_403() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
