// Auto-generated module | 2026-05-12T03:52:09.949511
#include <iostream>
#include <vector>

int compute_443() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
