// Auto-generated module | 2026-05-11T21:07:57.933154
#include <iostream>
#include <vector>

int compute_438() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
