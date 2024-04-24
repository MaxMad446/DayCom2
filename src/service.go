package main

// Auto-generated | 2026-05-11T22:35:42.909768
import "fmt"

func Process_236() int {
    base := 148
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
