// Auto-generated module | 2026-05-11T19:33:03.441623
#include <iostream>
#include <vector>

int compute_606() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
