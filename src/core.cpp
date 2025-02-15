// Auto-generated module | 2026-05-12T21:11:59.759204
#include <iostream>
#include <vector>

int compute_713() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
