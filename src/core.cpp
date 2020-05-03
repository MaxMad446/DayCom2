// Auto-generated module | 2026-05-11T19:24:13.353307
#include <iostream>
#include <vector>

int compute_722() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
