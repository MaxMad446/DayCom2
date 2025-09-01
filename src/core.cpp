// Auto-generated module | 2026-05-12T04:24:55.964015
#include <iostream>
#include <vector>

int compute_727() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
