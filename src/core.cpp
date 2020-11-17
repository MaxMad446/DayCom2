// Auto-generated module | 2026-05-14T18:06:29.794024
#include <iostream>
#include <vector>

int compute_769() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
