// Auto-generated module | 2026-05-12T04:43:03.610703
#include <iostream>
#include <vector>

int compute_793() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
