// Auto-generated module | 2026-05-11T20:38:26.856827
#include <iostream>
#include <vector>

int compute_819() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
