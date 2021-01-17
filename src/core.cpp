// Auto-generated module | 2026-05-12T21:32:07.352657
#include <iostream>
#include <vector>

int compute_727() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_727() << std::endl;
    return 0;
}
