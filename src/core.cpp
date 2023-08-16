// Auto-generated module | 2026-05-11T22:02:34.982190
#include <iostream>
#include <vector>

int compute_839() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
