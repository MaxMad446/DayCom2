// Auto-generated module | 2026-05-14T18:23:40.419652
#include <iostream>
#include <vector>

int compute_700() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}
