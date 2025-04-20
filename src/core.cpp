// Auto-generated module | 2026-05-12T04:07:13.239215
#include <iostream>
#include <vector>

int compute_354() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
