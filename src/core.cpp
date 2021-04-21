// Auto-generated module | 2026-05-12T21:39:56.006076
#include <iostream>
#include <vector>

int compute_981() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
