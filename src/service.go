package main

// Auto-generated | 2026-05-11T21:52:05.471605
import "fmt"

func Process_336() int {
    base := 399
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_336())
}
