// Auto-generated module | 2026-05-14T06:15:40.611814
#include <iostream>
#include <vector>

int compute_101() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
