// Auto-generated module | 2026-05-11T22:06:35.189630
#include <iostream>
#include <vector>

int compute_267() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
