// Auto-generated module | 2026-05-12T21:31:30.378355
#include <iostream>
#include <vector>

int compute_451() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
