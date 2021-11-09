// Auto-generated module | 2026-05-12T21:01:07.368161
#include <iostream>
#include <vector>

int compute_898() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
