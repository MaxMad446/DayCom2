// Auto-generated module | 2026-05-12T21:36:25.158788
#include <iostream>
#include <vector>

int compute_365() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
