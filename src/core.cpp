// Auto-generated module | 2026-05-11T21:14:10.340834
#include <iostream>
#include <vector>

int compute_755() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
