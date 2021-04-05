// Auto-generated module | 2026-05-12T21:38:32.007217
#include <iostream>
#include <vector>

int compute_878() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
