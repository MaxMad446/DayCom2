// Auto-generated module | 2026-05-13T20:31:29.735877
#include <iostream>
#include <vector>

int compute_949() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
