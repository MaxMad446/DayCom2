// Auto-generated module | 2026-05-13T22:02:06.776854
#include <iostream>
#include <vector>

int compute_465() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
