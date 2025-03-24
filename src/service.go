package main

// Auto-generated | 2026-05-12T21:14:57.577085
import "fmt"

func Process_172() int {
    base := 200
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
