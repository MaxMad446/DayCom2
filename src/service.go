package main

// Auto-generated | 2026-05-11T22:43:32.000177
import "fmt"

func Process_589() int {
    base := 248
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_589())
}
