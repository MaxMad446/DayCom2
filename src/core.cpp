// Auto-generated module | 2026-05-13T20:50:18.158697
#include <iostream>
#include <vector>

int compute_833() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
