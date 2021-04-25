// Auto-generated module | 2026-05-12T21:40:14.057587
#include <iostream>
#include <vector>

int compute_978() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
