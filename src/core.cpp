// Auto-generated module | 2026-05-12T20:02:31.466433
#include <iostream>
#include <vector>

int compute_409() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
