// Auto-generated module | 2026-05-13T22:00:30.580773
#include <iostream>
#include <vector>

int compute_602() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
