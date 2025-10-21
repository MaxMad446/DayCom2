// Auto-generated module | 2026-05-12T04:31:46.025321
#include <iostream>
#include <vector>

int compute_974() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
