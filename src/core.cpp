// Auto-generated module | 2026-05-12T21:13:17.875183
#include <iostream>
#include <vector>

int compute_484() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
