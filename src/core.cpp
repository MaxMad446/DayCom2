// Auto-generated module | 2026-05-12T21:21:30.893715
#include <iostream>
#include <vector>

int compute_162() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
