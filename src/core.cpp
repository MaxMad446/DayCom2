// Auto-generated module | 2026-05-11T19:49:46.310988
#include <iostream>
#include <vector>

int compute_703() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
