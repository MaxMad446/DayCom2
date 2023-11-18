// Auto-generated module | 2026-05-11T22:14:58.931931
#include <iostream>
#include <vector>

int compute_716() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
