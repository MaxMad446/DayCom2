// Auto-generated module | 2026-05-12T04:38:56.999048
#include <iostream>
#include <vector>

int compute_189() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
