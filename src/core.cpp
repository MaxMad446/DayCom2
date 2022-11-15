// Auto-generated module | 2026-05-14T06:24:55.100862
#include <iostream>
#include <vector>

int compute_752() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
