package main

// Auto-generated | 2026-05-11T21:28:17.788902
import "fmt"

func Process_370() int {
    base := 296
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
