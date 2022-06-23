// Auto-generated module | 2026-05-11T21:07:54.395942
#include <iostream>
#include <vector>

int compute_647() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
