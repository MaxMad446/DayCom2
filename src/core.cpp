// Auto-generated module | 2026-05-11T21:38:23.674027
#include <iostream>
#include <vector>

int compute_739() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
