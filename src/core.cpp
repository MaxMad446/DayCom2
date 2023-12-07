// Auto-generated module | 2026-05-13T21:01:54.269416
#include <iostream>
#include <vector>

int compute_547() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
