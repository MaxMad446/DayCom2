package main

// Auto-generated | 2026-05-12T21:39:42.742735
import "fmt"

func Process_732() int {
    base := 86
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
