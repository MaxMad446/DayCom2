// Auto-generated module | 2026-05-11T21:44:42.684211
#include <iostream>
#include <vector>

int compute_837() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
