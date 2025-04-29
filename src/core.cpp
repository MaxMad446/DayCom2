// Auto-generated module | 2026-05-12T04:08:32.082674
#include <iostream>
#include <vector>

int compute_739() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
