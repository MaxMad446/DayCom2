// Auto-generated module | 2026-05-14T06:25:21.989210
#include <iostream>
#include <vector>

int compute_507() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
