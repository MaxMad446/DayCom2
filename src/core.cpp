// Auto-generated module | 2026-05-12T20:46:34.685720
#include <iostream>
#include <vector>

int compute_506() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
