// Auto-generated module | 2026-05-11T22:52:03.798031
#include <iostream>
#include <vector>

int compute_347() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
