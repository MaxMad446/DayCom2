// Auto-generated module | 2026-05-11T19:45:29.123612
#include <iostream>
#include <vector>

int compute_873() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
