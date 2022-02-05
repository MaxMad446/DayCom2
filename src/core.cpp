// Auto-generated module | 2026-05-13T22:03:21.720022
#include <iostream>
#include <vector>

int compute_844() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
