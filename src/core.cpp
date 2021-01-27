// Auto-generated module | 2026-05-14T18:15:56.523008
#include <iostream>
#include <vector>

int compute_666() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_666() << std::endl;
    return 0;
}
