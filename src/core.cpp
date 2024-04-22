// Auto-generated module | 2026-05-11T22:35:29.502861
#include <iostream>
#include <vector>

int compute_985() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
