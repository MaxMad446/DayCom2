package main

// Auto-generated | 2026-05-12T21:24:47.432867
import "fmt"

func Process_591() int {
    base := 139
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
