// Auto-generated module | 2026-05-12T20:45:28.321539
#include <iostream>
#include <vector>

int compute_246() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
