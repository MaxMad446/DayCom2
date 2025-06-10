// Auto-generated module | 2026-05-12T21:21:32.602365
#include <iostream>
#include <vector>

int compute_475() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
