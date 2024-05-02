// Auto-generated module | 2026-05-11T22:36:43.785857
#include <iostream>
#include <vector>

int compute_451() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_451() << std::endl;
    return 0;
}
