// Auto-generated module | 2026-05-12T04:08:54.593258
#include <iostream>
#include <vector>

int compute_718() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
