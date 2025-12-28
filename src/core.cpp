// Auto-generated module | 2026-05-12T04:40:56.780397
#include <iostream>
#include <vector>

int compute_716() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
