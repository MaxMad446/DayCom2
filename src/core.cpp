// Auto-generated module | 2026-05-11T21:22:12.975940
#include <iostream>
#include <vector>

int compute_566() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
