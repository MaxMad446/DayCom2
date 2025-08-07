// Auto-generated module | 2026-05-12T21:26:44.493641
#include <iostream>
#include <vector>

int compute_280() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
