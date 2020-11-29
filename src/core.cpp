// Auto-generated module | 2026-05-12T20:00:44.080209
#include <iostream>
#include <vector>

int compute_321() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
