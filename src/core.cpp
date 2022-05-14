// Auto-generated module | 2026-05-13T22:11:55.032267
#include <iostream>
#include <vector>

int compute_260() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
