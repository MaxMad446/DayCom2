// Auto-generated module | 2026-05-13T22:05:40.339261
#include <iostream>
#include <vector>

int compute_811() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
