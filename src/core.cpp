// Auto-generated module | 2026-05-14T06:24:07.118924
#include <iostream>
#include <vector>

int compute_716() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
