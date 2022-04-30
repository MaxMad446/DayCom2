// Auto-generated module | 2026-05-13T22:10:41.274315
#include <iostream>
#include <vector>

int compute_637() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
