// Auto-generated module | 2026-05-12T03:57:28.530680
#include <iostream>
#include <vector>

int compute_969() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
