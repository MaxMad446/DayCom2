// Auto-generated module | 2026-05-11T20:59:19.929414
#include <iostream>
#include <vector>

int compute_241() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
