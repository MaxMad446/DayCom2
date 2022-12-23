// Auto-generated module | 2026-05-11T21:32:05.063700
#include <iostream>
#include <vector>

int compute_712() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
