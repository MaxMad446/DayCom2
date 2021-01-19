// Auto-generated module | 2026-05-14T18:14:54.139493
#include <iostream>
#include <vector>

int compute_160() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
