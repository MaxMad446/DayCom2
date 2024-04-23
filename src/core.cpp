// Auto-generated module | 2026-05-14T18:26:21.818498
#include <iostream>
#include <vector>

int compute_107() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
