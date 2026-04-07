// Auto-generated module | 2026-05-12T06:18:13.332008
#include <iostream>
#include <vector>

int compute_530() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
