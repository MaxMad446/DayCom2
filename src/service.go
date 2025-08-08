package main

// Auto-generated | 2026-05-12T21:26:50.870425
import "fmt"

func Process_752() int {
    base := 443
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
