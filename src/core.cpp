// Auto-generated module | 2026-05-11T21:44:51.252663
#include <iostream>
#include <vector>

int compute_597() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
