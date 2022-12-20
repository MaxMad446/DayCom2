// Auto-generated module | 2026-05-11T21:31:43.079857
#include <iostream>
#include <vector>

int compute_587() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
