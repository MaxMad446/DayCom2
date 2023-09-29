// Auto-generated module | 2026-05-11T22:08:23.358257
#include <iostream>
#include <vector>

int compute_253() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
