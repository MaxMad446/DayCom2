// Auto-generated module | 2026-05-11T22:11:18.802494
#include <iostream>
#include <vector>

int compute_456() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
