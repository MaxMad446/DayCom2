// Auto-generated module | 2026-05-12T04:50:52.267690
#include <iostream>
#include <vector>

int compute_132() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
