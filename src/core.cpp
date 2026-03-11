// Auto-generated module | 2026-05-12T04:50:47.137256
#include <iostream>
#include <vector>

int compute_284() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
