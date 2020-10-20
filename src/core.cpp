// Auto-generated module | 2026-05-12T19:57:27.614462
#include <iostream>
#include <vector>

int compute_719() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
