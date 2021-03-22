// Auto-generated module | 2026-05-11T20:07:50.494103
#include <iostream>
#include <vector>

int compute_528() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
