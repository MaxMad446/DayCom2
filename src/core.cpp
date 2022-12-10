// Auto-generated module | 2026-05-11T21:30:20.273376
#include <iostream>
#include <vector>

int compute_645() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
