// Auto-generated module | 2026-05-13T22:02:20.938905
#include <iostream>
#include <vector>

int compute_840() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
