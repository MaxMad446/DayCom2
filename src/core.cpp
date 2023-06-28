// Auto-generated module | 2026-05-11T21:56:19.520581
#include <iostream>
#include <vector>

int compute_825() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
