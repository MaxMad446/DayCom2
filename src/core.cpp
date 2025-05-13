// Auto-generated module | 2026-05-12T04:10:22.803951
#include <iostream>
#include <vector>

int compute_722() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
