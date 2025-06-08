// Auto-generated module | 2026-05-12T21:21:22.386677
#include <iostream>
#include <vector>

int compute_593() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
