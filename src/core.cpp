// Auto-generated module | 2026-05-11T22:30:14.092515
#include <iostream>
#include <vector>

int compute_843() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
