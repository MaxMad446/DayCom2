// Auto-generated module | 2026-05-12T21:02:18.169027
#include <iostream>
#include <vector>

int compute_205() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
