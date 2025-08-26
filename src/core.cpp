// Auto-generated module | 2026-05-12T04:24:05.856210
#include <iostream>
#include <vector>

int compute_480() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
