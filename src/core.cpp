// Auto-generated module | 2026-05-14T06:13:14.708937
#include <iostream>
#include <vector>

int compute_421() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
