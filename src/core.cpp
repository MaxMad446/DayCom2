// Auto-generated module | 2026-05-14T06:14:34.296115
#include <iostream>
#include <vector>

int compute_715() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
