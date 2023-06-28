// Auto-generated module | 2026-05-11T21:56:17.850008
#include <iostream>
#include <vector>

int compute_581() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_581() << std::endl;
    return 0;
}
