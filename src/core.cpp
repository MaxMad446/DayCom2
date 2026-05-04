// Auto-generated module | 2026-05-12T06:21:59.089957
#include <iostream>
#include <vector>

int compute_506() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
