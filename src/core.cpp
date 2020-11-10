// Auto-generated module | 2026-05-12T19:59:09.563011
#include <iostream>
#include <vector>

int compute_974() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
