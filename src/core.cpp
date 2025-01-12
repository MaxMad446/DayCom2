// Auto-generated module | 2026-05-12T21:08:58.177662
#include <iostream>
#include <vector>

int compute_845() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
