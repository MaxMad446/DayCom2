// Auto-generated module | 2026-05-12T03:52:58.118007
#include <iostream>
#include <vector>

int compute_716() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
