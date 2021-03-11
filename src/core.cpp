// Auto-generated module | 2026-05-12T20:40:40.559773
#include <iostream>
#include <vector>

int compute_721() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_721() << std::endl;
    return 0;
}
