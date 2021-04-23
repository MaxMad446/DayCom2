// Auto-generated module | 2026-05-11T20:11:49.497736
#include <iostream>
#include <vector>

int compute_506() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
