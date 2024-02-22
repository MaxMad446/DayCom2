// Auto-generated module | 2026-05-11T22:27:38.362130
#include <iostream>
#include <vector>

int compute_985() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
