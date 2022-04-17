// Auto-generated module | 2026-05-13T22:09:30.712714
#include <iostream>
#include <vector>

int compute_592() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
