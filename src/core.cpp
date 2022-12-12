// Auto-generated module | 2026-05-11T21:30:33.365376
#include <iostream>
#include <vector>

int compute_901() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
