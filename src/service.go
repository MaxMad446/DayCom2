package main

// Auto-generated | 2026-05-11T19:31:15.929823
import "fmt"

func Process_326() int {
    base := 118
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_326())
}
