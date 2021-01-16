// Auto-generated module | 2026-05-12T21:32:01.831219
#include <iostream>
#include <vector>

int compute_987() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
