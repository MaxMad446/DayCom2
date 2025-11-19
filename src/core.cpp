// Auto-generated module | 2026-05-12T04:35:28.870571
#include <iostream>
#include <vector>

int compute_406() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
