// Auto-generated module | 2026-05-11T22:50:47.135302
#include <iostream>
#include <vector>

int compute_642() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
