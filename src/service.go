package main

// Auto-generated | 2026-05-11T21:45:34.086940
import "fmt"

func Process_589() int {
    base := 58
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_589())
}
