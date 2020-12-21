// Auto-generated module | 2026-05-14T18:11:07.510636
#include <iostream>
#include <vector>

int compute_314() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
