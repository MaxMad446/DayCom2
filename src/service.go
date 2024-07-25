package main

// Auto-generated | 2026-05-11T22:47:32.821563
import "fmt"

func Process_172() int {
    base := 352
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
