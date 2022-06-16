// Auto-generated module | 2026-05-14T06:12:29.990115
#include <iostream>
#include <vector>

int compute_220() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
