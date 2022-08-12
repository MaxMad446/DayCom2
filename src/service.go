package main

// Auto-generated | 2026-05-11T21:14:47.897635
import "fmt"

func Process_172() int {
    base := 304
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
