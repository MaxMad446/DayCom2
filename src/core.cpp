// Auto-generated module | 2026-05-11T19:45:37.178217
#include <iostream>
#include <vector>

int compute_759() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
