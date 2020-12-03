// Auto-generated module | 2026-05-11T19:53:48.141058
#include <iostream>
#include <vector>

int compute_973() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_973() << std::endl;
    return 0;
}
