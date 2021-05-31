// Auto-generated module | 2026-05-11T20:16:50.232883
#include <iostream>
#include <vector>

int compute_626() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
