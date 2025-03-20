// Auto-generated module | 2026-05-12T04:03:15.919134
#include <iostream>
#include <vector>

int compute_589() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
