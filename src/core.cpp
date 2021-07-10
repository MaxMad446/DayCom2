// Auto-generated module | 2026-05-11T20:22:10.063535
#include <iostream>
#include <vector>

int compute_768() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
