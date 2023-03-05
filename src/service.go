package main

// Auto-generated | 2026-05-11T21:41:19.179446
import "fmt"

func Process_172() int {
    base := 303
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
