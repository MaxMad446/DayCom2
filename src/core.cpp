// Auto-generated module | 2026-05-13T22:05:46.985593
#include <iostream>
#include <vector>

int compute_267() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
