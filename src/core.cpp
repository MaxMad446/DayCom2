// Auto-generated module | 2026-05-11T21:48:42.261948
#include <iostream>
#include <vector>

int compute_435() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
