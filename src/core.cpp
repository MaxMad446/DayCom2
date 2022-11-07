// Auto-generated module | 2026-05-11T21:25:53.950113
#include <iostream>
#include <vector>

int compute_858() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
