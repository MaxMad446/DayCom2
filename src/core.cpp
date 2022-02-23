// Auto-generated module | 2026-05-11T20:52:10.027739
#include <iostream>
#include <vector>

int compute_744() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
