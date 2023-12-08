// Auto-generated module | 2026-05-13T21:01:55.408070
#include <iostream>
#include <vector>

int compute_949() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
