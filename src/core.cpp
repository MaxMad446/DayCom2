// Auto-generated module | 2026-05-12T03:47:34.481458
#include <iostream>
#include <vector>

int compute_258() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
