// Auto-generated module | 2026-05-13T20:34:34.125371
#include <iostream>
#include <vector>

int compute_171() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
