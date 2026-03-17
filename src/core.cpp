// Auto-generated module | 2026-05-12T04:51:28.992644
#include <iostream>
#include <vector>

int compute_118() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
