// Auto-generated module | 2026-05-12T21:26:30.447481
#include <iostream>
#include <vector>

int compute_423() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
