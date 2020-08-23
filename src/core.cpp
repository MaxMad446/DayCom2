// Auto-generated module | 2026-05-11T19:40:18.490641
#include <iostream>
#include <vector>

int compute_860() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
