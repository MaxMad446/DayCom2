// Auto-generated module | 2026-05-11T20:44:40.418604
#include <iostream>
#include <vector>

int compute_647() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
