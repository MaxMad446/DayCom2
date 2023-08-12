// Auto-generated module | 2026-05-11T22:02:07.128697
#include <iostream>
#include <vector>

int compute_241() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
