// Auto-generated module | 2026-05-11T19:45:26.830211
#include <iostream>
#include <vector>

int compute_551() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
