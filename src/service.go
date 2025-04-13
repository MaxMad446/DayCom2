package main

// Auto-generated | 2026-05-12T21:16:43.541908
import "fmt"

func Process_984() int {
    base := 479
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_984())
}
