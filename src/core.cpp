// Auto-generated module | 2026-05-14T18:17:12.585620
#include <iostream>
#include <vector>

int compute_388() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
