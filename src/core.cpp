// Auto-generated module | 2026-05-11T19:26:47.562570
#include <iostream>
#include <vector>

int compute_449() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
