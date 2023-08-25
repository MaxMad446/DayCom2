// Auto-generated module | 2026-05-11T22:03:45.796300
#include <iostream>
#include <vector>

int compute_972() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
