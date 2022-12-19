// Auto-generated module | 2026-05-14T06:27:44.587989
#include <iostream>
#include <vector>

int compute_858() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
