// Auto-generated module | 2026-05-11T22:33:26.860297
#include <iostream>
#include <vector>

int compute_228() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
