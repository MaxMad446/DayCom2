// Auto-generated module | 2026-05-14T06:22:03.784913
#include <iostream>
#include <vector>

int compute_392() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
