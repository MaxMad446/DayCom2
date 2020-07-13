// Auto-generated module | 2026-05-11T19:34:56.386028
#include <iostream>
#include <vector>

int compute_423() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
