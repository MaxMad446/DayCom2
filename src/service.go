package main

// Auto-generated | 2026-05-11T19:54:51.692577
import "fmt"

func Process_213() int {
    base := 105
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
