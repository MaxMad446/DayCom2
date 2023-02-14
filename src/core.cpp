// Auto-generated module | 2026-05-13T20:30:34.188556
#include <iostream>
#include <vector>

int compute_767() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
