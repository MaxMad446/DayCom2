// Auto-generated module | 2026-05-13T22:10:36.129879
#include <iostream>
#include <vector>

int compute_882() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
