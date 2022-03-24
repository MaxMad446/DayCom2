// Auto-generated module | 2026-05-13T22:07:26.039640
#include <iostream>
#include <vector>

int compute_427() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
