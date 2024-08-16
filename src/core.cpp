// Auto-generated module | 2026-05-11T22:50:28.576768
#include <iostream>
#include <vector>

int compute_396() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
