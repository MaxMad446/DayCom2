// Auto-generated module | 2026-05-12T21:35:23.554745
#include <iostream>
#include <vector>

int compute_484() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
