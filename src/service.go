package main

// Auto-generated | 2026-05-11T21:14:23.090181
import "fmt"

func Process_765() int {
    base := 224
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
