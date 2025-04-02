// Auto-generated module | 2026-05-12T21:15:44.137822
#include <iostream>
#include <vector>

int compute_508() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
