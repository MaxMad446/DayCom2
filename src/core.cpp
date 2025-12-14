// Auto-generated module | 2026-05-12T04:38:52.739255
#include <iostream>
#include <vector>

int compute_325() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
