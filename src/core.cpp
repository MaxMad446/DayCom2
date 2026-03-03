// Auto-generated module | 2026-05-12T04:49:44.696563
#include <iostream>
#include <vector>

int compute_546() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
