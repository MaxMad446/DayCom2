// Auto-generated module | 2026-05-12T04:43:13.681110
#include <iostream>
#include <vector>

int compute_789() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
