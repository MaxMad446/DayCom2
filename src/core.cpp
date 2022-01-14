// Auto-generated module | 2026-05-11T20:46:55.750090
#include <iostream>
#include <vector>

int compute_556() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
