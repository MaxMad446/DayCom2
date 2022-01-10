// Auto-generated module | 2026-05-11T20:46:24.322593
#include <iostream>
#include <vector>

int compute_958() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
