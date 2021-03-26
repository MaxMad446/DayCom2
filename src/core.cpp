// Auto-generated module | 2026-05-12T20:41:50.511909
#include <iostream>
#include <vector>

int compute_281() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
