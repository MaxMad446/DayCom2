// Auto-generated module | 2026-05-12T20:59:05.653515
#include <iostream>
#include <vector>

int compute_474() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
