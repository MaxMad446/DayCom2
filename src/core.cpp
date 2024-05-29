// Auto-generated module | 2026-05-14T18:29:09.125200
#include <iostream>
#include <vector>

int compute_325() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
