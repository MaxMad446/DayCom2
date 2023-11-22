// Auto-generated module | 2026-05-11T22:15:27.456677
#include <iostream>
#include <vector>

int compute_910() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_910() << std::endl;
    return 0;
}
