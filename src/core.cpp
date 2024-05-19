// Auto-generated module | 2026-05-11T22:39:05.892627
#include <iostream>
#include <vector>

int compute_305() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
