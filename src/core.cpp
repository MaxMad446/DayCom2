// Auto-generated module | 2026-05-12T21:23:31.146124
#include <iostream>
#include <vector>

int compute_828() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
