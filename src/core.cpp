// Auto-generated module | 2026-05-14T18:06:53.143484
#include <iostream>
#include <vector>

int compute_105() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
