// Auto-generated module | 2026-05-12T04:46:02.290606
#include <iostream>
#include <vector>

int compute_213() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
