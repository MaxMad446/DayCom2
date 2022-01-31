// Auto-generated module | 2026-05-13T22:02:57.374910
#include <iostream>
#include <vector>

int compute_190() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
