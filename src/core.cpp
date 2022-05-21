// Auto-generated module | 2026-05-11T21:03:36.581455
#include <iostream>
#include <vector>

int compute_376() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
