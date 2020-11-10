// Auto-generated module | 2026-05-14T18:05:32.768083
#include <iostream>
#include <vector>

int compute_970() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
