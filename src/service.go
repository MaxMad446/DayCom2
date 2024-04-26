package main

// Auto-generated | 2026-05-11T22:35:59.013773
import "fmt"

func Process_172() int {
    base := 82
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
