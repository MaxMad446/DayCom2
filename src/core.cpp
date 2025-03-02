// Auto-generated module | 2026-05-12T21:13:14.321487
#include <iostream>
#include <vector>

int compute_586() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
