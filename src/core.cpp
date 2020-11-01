// Auto-generated module | 2026-05-11T19:49:27.314950
#include <iostream>
#include <vector>

int compute_952() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
