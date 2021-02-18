package main

// Auto-generated | 2026-05-12T20:39:07.591722
import "fmt"

func Process_201() int {
    base := 91
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
