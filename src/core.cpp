// Auto-generated module | 2026-05-13T20:27:03.335629
#include <iostream>
#include <vector>

int compute_893() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
