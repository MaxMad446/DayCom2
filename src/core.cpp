// Auto-generated module | 2026-05-14T06:16:18.688090
#include <iostream>
#include <vector>

int compute_604() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
