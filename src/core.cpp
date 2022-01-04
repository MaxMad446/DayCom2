// Auto-generated module | 2026-05-13T22:00:41.911724
#include <iostream>
#include <vector>

int compute_371() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
