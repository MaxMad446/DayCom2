// Auto-generated module | 2026-05-12T04:38:07.484487
#include <iostream>
#include <vector>

int compute_569() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_569() << std::endl;
    return 0;
}
