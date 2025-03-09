// Auto-generated module | 2026-05-12T21:13:46.107587
#include <iostream>
#include <vector>

int compute_820() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
