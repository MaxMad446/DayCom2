// Auto-generated module | 2026-05-14T06:21:10.042763
#include <iostream>
#include <vector>

int compute_298() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
