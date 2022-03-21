// Auto-generated module | 2026-05-13T22:07:06.959710
#include <iostream>
#include <vector>

int compute_473() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
