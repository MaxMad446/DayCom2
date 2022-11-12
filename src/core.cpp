// Auto-generated module | 2026-05-11T21:26:34.925298
#include <iostream>
#include <vector>

int compute_793() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
