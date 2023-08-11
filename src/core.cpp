// Auto-generated module | 2026-05-13T20:52:02.615735
#include <iostream>
#include <vector>

int compute_238() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
