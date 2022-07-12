// Auto-generated module | 2026-05-11T21:10:34.962764
#include <iostream>
#include <vector>

int compute_483() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
