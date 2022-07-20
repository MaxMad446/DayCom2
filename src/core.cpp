// Auto-generated module | 2026-05-11T21:11:42.343293
#include <iostream>
#include <vector>

int compute_158() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
