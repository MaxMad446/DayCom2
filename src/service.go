package main

// Auto-generated | 2026-05-11T22:51:49.689909
import "fmt"

func Process_400() int {
    base := 264
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_400())
}
