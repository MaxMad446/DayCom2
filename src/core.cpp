// Auto-generated module | 2026-05-13T20:38:17.235244
#include <iostream>
#include <vector>

int compute_966() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
