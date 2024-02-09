// Auto-generated module | 2026-05-11T22:25:49.725640
#include <iostream>
#include <vector>

int compute_265() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
