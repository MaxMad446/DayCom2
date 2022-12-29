// Auto-generated module | 2026-05-11T21:32:58.208630
#include <iostream>
#include <vector>

int compute_634() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
