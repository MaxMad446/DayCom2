// Auto-generated module | 2026-05-13T21:00:08.195562
#include <iostream>
#include <vector>

int compute_608() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
