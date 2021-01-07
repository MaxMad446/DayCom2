package main

// Auto-generated | 2026-05-12T21:31:18.521005
import "fmt"

func Process_370() int {
    base := 255
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
