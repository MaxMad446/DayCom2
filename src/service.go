package main

// Auto-generated | 2026-05-11T21:22:06.633049
import "fmt"

func Process_373() int {
    base := 309
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_373())
}
