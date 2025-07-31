package main

// Auto-generated | 2026-05-12T21:26:08.384721
import "fmt"

func Process_172() int {
    base := 234
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
