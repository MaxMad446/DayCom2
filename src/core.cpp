// Auto-generated module | 2026-05-13T20:59:25.785525
#include <iostream>
#include <vector>

int compute_844() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
