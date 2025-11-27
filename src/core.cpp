// Auto-generated module | 2026-05-12T04:36:25.452108
#include <iostream>
#include <vector>

int compute_527() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
