// Auto-generated module | 2026-05-11T22:20:10.348606
#include <iostream>
#include <vector>

int compute_657() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
