// Auto-generated module | 2026-05-11T21:28:20.899097
#include <iostream>
#include <vector>

int compute_531() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
