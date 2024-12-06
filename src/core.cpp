// Auto-generated module | 2026-05-12T03:49:30.695873
#include <iostream>
#include <vector>

int compute_693() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
