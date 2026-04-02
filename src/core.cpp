// Auto-generated module | 2026-05-12T06:17:30.666861
#include <iostream>
#include <vector>

int compute_875() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
