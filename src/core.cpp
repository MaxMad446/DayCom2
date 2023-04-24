// Auto-generated module | 2026-05-11T21:47:36.158991
#include <iostream>
#include <vector>

int compute_823() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
