// Auto-generated module | 2026-05-11T19:59:25.833284
#include <iostream>
#include <vector>

int compute_228() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
