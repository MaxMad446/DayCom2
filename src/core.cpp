// Auto-generated module | 2026-05-14T06:16:20.426485
#include <iostream>
#include <vector>

int compute_814() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
