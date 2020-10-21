package main

// Auto-generated | 2026-05-12T19:57:31.867944
import "fmt"

func Process_370() int {
    base := 477
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
