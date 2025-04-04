// Auto-generated module | 2026-05-12T21:15:53.151727
#include <iostream>
#include <vector>

int compute_546() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
