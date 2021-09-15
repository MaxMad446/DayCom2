// Auto-generated module | 2026-05-11T20:30:55.483140
#include <iostream>
#include <vector>

int compute_768() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
