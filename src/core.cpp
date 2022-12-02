// Auto-generated module | 2026-05-14T06:26:15.827698
#include <iostream>
#include <vector>

int compute_657() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
