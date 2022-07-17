// Auto-generated module | 2026-05-14T06:15:02.052505
#include <iostream>
#include <vector>

int compute_193() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
