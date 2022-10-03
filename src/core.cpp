// Auto-generated module | 2026-05-11T21:21:30.738872
#include <iostream>
#include <vector>

int compute_968() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
