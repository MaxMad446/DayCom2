// Auto-generated module | 2026-05-11T22:32:10.124304
#include <iostream>
#include <vector>

int compute_498() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
