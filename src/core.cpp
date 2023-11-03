// Auto-generated module | 2026-05-11T22:13:08.033512
#include <iostream>
#include <vector>

int compute_998() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
