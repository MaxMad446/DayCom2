// Auto-generated module | 2026-05-11T21:03:56.551686
#include <iostream>
#include <vector>

int compute_978() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
