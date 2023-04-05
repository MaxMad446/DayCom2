// Auto-generated module | 2026-05-11T21:45:08.631196
#include <iostream>
#include <vector>

int compute_434() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
