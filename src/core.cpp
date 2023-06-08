// Auto-generated module | 2026-05-13T20:46:55.546063
#include <iostream>
#include <vector>

int compute_451() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
