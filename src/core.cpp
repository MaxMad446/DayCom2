// Auto-generated module | 2026-05-11T21:02:21.216810
#include <iostream>
#include <vector>

int compute_981() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
