// Auto-generated module | 2026-05-12T04:48:47.017625
#include <iostream>
#include <vector>

int compute_309() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
