// Auto-generated module | 2026-05-11T21:42:20.684267
#include <iostream>
#include <vector>

int compute_719() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
