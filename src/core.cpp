// Auto-generated module | 2026-05-14T06:12:53.233894
#include <iostream>
#include <vector>

int compute_314() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
