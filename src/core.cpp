// Auto-generated module | 2026-05-11T22:07:06.241748
#include <iostream>
#include <vector>

int compute_809() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
