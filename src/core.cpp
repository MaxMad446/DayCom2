// Auto-generated module | 2026-05-12T04:29:29.141999
#include <iostream>
#include <vector>

int compute_614() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
