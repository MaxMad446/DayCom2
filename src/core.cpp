// Auto-generated module | 2026-05-11T22:02:54.576268
#include <iostream>
#include <vector>

int compute_996() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
