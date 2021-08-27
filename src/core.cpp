// Auto-generated module | 2026-05-11T20:28:26.565019
#include <iostream>
#include <vector>

int compute_127() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
