// Auto-generated module | 2026-05-13T22:09:36.763208
#include <iostream>
#include <vector>

int compute_274() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
