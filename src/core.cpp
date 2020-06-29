// Auto-generated module | 2026-05-11T19:33:09.349371
#include <iostream>
#include <vector>

int compute_816() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
