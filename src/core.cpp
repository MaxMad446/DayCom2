// Auto-generated module | 2026-05-12T04:50:30.888520
#include <iostream>
#include <vector>

int compute_334() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
