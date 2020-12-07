// Auto-generated module | 2026-05-12T20:01:21.821929
#include <iostream>
#include <vector>

int compute_839() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
