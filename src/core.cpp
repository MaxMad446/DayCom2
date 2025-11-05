// Auto-generated module | 2026-05-12T04:33:40.829169
#include <iostream>
#include <vector>

int compute_122() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
