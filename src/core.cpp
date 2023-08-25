// Auto-generated module | 2026-05-11T22:03:46.775335
#include <iostream>
#include <vector>

int compute_673() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
