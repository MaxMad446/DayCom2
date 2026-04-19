// Auto-generated module | 2026-05-12T06:19:49.754872
#include <iostream>
#include <vector>

int compute_506() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
