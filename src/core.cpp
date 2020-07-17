// Auto-generated module | 2026-05-11T19:35:20.931683
#include <iostream>
#include <vector>

int compute_222() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
