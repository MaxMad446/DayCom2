// Auto-generated module | 2026-05-14T06:25:56.881300
#include <iostream>
#include <vector>

int compute_448() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
