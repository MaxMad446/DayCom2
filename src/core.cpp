// Auto-generated module | 2026-05-13T20:31:32.844267
#include <iostream>
#include <vector>

int compute_278() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
