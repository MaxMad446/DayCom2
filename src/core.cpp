// Auto-generated module | 2026-05-12T20:57:32.357935
#include <iostream>
#include <vector>

int compute_444() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
