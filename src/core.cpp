// Auto-generated module | 2026-05-12T04:38:55.695031
#include <iostream>
#include <vector>

int compute_533() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
