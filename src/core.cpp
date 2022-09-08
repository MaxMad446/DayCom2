// Auto-generated module | 2026-05-11T21:18:15.226279
#include <iostream>
#include <vector>

int compute_449() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
