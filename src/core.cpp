// Auto-generated module | 2026-05-11T21:41:24.100862
#include <iostream>
#include <vector>

int compute_620() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
