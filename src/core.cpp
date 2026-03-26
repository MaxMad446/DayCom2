// Auto-generated module | 2026-05-12T06:16:37.504631
#include <iostream>
#include <vector>

int compute_475() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
