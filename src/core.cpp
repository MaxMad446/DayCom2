// Auto-generated module | 2026-05-11T22:08:00.944264
#include <iostream>
#include <vector>

int compute_421() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
