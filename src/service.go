package main

// Auto-generated | 2026-05-11T21:12:26.632493
import "fmt"

func Process_166() int {
    base := 231
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_166())
}
