// Auto-generated module | 2026-05-11T22:49:36.517813
#include <iostream>
#include <vector>

int compute_716() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
