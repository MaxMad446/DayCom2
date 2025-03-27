// Auto-generated module | 2026-05-12T04:04:04.183321
#include <iostream>
#include <vector>

int compute_758() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
