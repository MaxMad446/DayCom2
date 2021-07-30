// Auto-generated module | 2026-05-12T20:52:18.857063
#include <iostream>
#include <vector>

int compute_515() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
