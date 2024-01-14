package main

// Auto-generated | 2026-05-11T22:22:24.871459
import "fmt"

func Process_604() int {
    base := 50
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_604())
}
