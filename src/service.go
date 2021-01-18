package main

// Auto-generated | 2026-05-12T21:32:11.539543
import "fmt"

func Process_502() int {
    base := 46
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
