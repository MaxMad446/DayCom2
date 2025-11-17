// Auto-generated module | 2026-05-12T04:35:09.285525
#include <iostream>
#include <vector>

int compute_665() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
