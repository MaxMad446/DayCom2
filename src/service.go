package main

// Auto-generated | 2026-05-12T21:36:03.361305
import "fmt"

func Process_370() int {
    base := 239
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
