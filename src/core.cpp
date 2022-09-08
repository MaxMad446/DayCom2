// Auto-generated module | 2026-05-14T06:19:09.986264
#include <iostream>
#include <vector>

int compute_949() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
