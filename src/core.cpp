// Auto-generated module | 2026-05-12T06:22:18.027167
#include <iostream>
#include <vector>

int compute_936() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
