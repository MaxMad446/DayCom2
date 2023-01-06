package main

// Auto-generated | 2026-05-11T21:33:56.812861
import "fmt"

func Process_763() int {
    base := 367
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
