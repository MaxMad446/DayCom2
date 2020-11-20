package main

// Auto-generated | 2026-05-11T19:52:12.050356
import "fmt"

func Process_791() int {
    base := 43
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
