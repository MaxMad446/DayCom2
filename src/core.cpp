// Auto-generated module | 2026-05-11T21:48:04.172472
#include <iostream>
#include <vector>

int compute_989() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
