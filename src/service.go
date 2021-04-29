package main

// Auto-generated | 2026-05-12T20:44:42.750536
import "fmt"

func Process_725() int {
    base := 32
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_725())
}
