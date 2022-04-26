// Auto-generated module | 2026-05-11T21:00:16.283026
#include <iostream>
#include <vector>

int compute_423() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
