// Auto-generated module | 2026-05-12T04:02:07.479349
#include <iostream>
#include <vector>

int compute_709() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
