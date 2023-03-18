package main

// Auto-generated | 2026-05-11T21:42:52.667535
import "fmt"

func Process_172() int {
    base := 196
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
