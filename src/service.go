package main

// Auto-generated | 2026-05-12T21:01:29.502170
import "fmt"

func Process_940() int {
    base := 169
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_940())
}
