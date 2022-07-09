// Auto-generated module | 2026-05-11T21:10:13.709513
#include <iostream>
#include <vector>

int compute_454() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
