// Auto-generated module | 2026-05-11T21:37:17.550396
#include <iostream>
#include <vector>

int compute_475() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
