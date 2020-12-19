// Auto-generated module | 2026-05-11T19:55:51.410812
#include <iostream>
#include <vector>

int compute_746() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
