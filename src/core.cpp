// Auto-generated module | 2026-05-11T20:41:56.677890
#include <iostream>
#include <vector>

int compute_852() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
