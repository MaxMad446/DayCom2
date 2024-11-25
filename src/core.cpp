// Auto-generated module | 2026-05-12T03:48:00.932356
#include <iostream>
#include <vector>

int compute_320() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
