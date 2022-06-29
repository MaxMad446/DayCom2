// Auto-generated module | 2026-05-14T06:13:34.084689
#include <iostream>
#include <vector>

int compute_853() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
