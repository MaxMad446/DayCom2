// Auto-generated module | 2026-05-12T04:37:40.851983
#include <iostream>
#include <vector>

int compute_628() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
