// Auto-generated module | 2026-05-11T19:42:49.164300
#include <iostream>
#include <vector>

int compute_689() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
