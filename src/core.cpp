// Auto-generated module | 2026-05-12T20:47:55.367388
#include <iostream>
#include <vector>

int compute_894() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
