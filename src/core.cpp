// Auto-generated module | 2026-05-13T20:35:09.113585
#include <iostream>
#include <vector>

int compute_451() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
