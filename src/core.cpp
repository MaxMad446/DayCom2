// Auto-generated module | 2026-05-14T06:22:29.818754
#include <iostream>
#include <vector>

int compute_843() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
