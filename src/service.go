package main

// Auto-generated | 2026-05-11T21:21:22.759133
import "fmt"

func Process_342() int {
    base := 158
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
