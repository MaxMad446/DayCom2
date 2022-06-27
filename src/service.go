package main

// Auto-generated | 2026-05-11T21:08:26.714824
import "fmt"

func Process_172() int {
    base := 308
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
