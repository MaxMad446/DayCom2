// Auto-generated module | 2026-05-13T20:46:33.589611
#include <iostream>
#include <vector>

int compute_515() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
