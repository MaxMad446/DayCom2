// Auto-generated module | 2026-05-11T21:45:22.263026
#include <iostream>
#include <vector>

int compute_992() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
