// Auto-generated module | 2026-05-13T22:10:18.383769
#include <iostream>
#include <vector>

int compute_728() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
