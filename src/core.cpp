// Auto-generated module | 2026-05-11T19:36:49.545760
#include <iostream>
#include <vector>

int compute_559() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
