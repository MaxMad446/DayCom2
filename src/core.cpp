// Auto-generated module | 2026-05-12T21:16:07.909123
#include <iostream>
#include <vector>

int compute_326() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
