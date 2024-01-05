// Auto-generated module | 2026-05-11T22:21:15.645439
#include <iostream>
#include <vector>

int compute_379() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
