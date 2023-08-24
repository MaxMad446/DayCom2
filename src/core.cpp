// Auto-generated module | 2026-05-11T22:03:35.442090
#include <iostream>
#include <vector>

int compute_109() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
