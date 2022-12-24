// Auto-generated module | 2026-05-14T06:28:12.006762
#include <iostream>
#include <vector>

int compute_325() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
