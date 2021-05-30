// Auto-generated module | 2026-05-11T20:16:46.651765
#include <iostream>
#include <vector>

int compute_329() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
