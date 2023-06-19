// Auto-generated module | 2026-05-13T20:47:50.476447
#include <iostream>
#include <vector>

int compute_388() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
