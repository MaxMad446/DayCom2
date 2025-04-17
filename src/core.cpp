// Auto-generated module | 2026-05-12T04:06:57.324298
#include <iostream>
#include <vector>

int compute_687() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
