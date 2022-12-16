// Auto-generated module | 2026-05-11T21:31:09.613708
#include <iostream>
#include <vector>

int compute_665() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_665() << std::endl;
    return 0;
}
