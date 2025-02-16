// Auto-generated module | 2026-05-12T03:58:59.868642
#include <iostream>
#include <vector>

int compute_645() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
