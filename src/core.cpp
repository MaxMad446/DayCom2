// Auto-generated module | 2026-05-12T04:45:28.941987
#include <iostream>
#include <vector>

int compute_857() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
