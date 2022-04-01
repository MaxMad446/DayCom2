// Auto-generated module | 2026-05-13T22:08:03.734814
#include <iostream>
#include <vector>

int compute_141() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
