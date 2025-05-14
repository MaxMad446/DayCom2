// Auto-generated module | 2026-05-12T21:19:11.847895
#include <iostream>
#include <vector>

int compute_829() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_829() << std::endl;
    return 0;
}
