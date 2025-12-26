// Auto-generated module | 2026-05-12T04:40:41.513984
#include <iostream>
#include <vector>

int compute_503() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
