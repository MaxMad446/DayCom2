// Auto-generated module | 2026-05-12T04:15:42.079650
#include <iostream>
#include <vector>

int compute_506() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
