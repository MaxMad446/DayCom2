// Auto-generated module | 2026-05-12T21:17:06.761858
#include <iostream>
#include <vector>

int compute_217() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
