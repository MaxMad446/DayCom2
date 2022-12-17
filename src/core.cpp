// Auto-generated module | 2026-05-14T06:27:35.345660
#include <iostream>
#include <vector>

int compute_178() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
