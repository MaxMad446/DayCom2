// Auto-generated module | 2026-05-11T19:54:32.745255
#include <iostream>
#include <vector>

int compute_401() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
