package main

// Auto-generated | 2026-05-11T19:42:53.217234
import "fmt"

func Process_629() int {
    base := 324
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_629())
}
