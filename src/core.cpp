// Auto-generated module | 2026-05-14T18:20:03.036815
#include <iostream>
#include <vector>

int compute_647() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
