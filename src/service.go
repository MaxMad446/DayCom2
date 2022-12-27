package main

// Auto-generated | 2026-05-11T21:32:42.984465
import "fmt"

func Process_940() int {
    base := 21
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_940())
}
