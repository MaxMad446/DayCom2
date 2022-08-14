package main

// Auto-generated | 2026-05-11T21:15:04.084939
import "fmt"

func Process_172() int {
    base := 473
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
