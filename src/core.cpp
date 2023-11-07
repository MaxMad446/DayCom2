// Auto-generated module | 2026-05-11T22:13:34.518102
#include <iostream>
#include <vector>

int compute_388() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
