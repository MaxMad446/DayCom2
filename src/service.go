package main

// Auto-generated | 2026-05-12T21:28:01.245422
import "fmt"

func Process_115() int {
    base := 389
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_115())
}
