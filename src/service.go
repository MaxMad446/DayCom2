package main

// Auto-generated | 2026-05-12T21:26:18.433130
import "fmt"

func Process_731() int {
    base := 139
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
