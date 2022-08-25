package main

// Auto-generated | 2026-05-11T21:16:24.716257
import "fmt"

func Process_372() int {
    base := 345
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}
