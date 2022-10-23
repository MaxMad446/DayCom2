// Auto-generated module | 2026-05-14T06:22:55.291120
#include <iostream>
#include <vector>

int compute_526() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_526() << std::endl;
    return 0;
}
