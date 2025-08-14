// Auto-generated module | 2026-05-12T21:27:20.899228
#include <iostream>
#include <vector>

int compute_951() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
