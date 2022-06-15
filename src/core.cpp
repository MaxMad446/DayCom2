// Auto-generated module | 2026-05-11T21:06:55.235252
#include <iostream>
#include <vector>

int compute_918() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
