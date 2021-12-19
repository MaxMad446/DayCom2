package main

// Auto-generated | 2026-05-12T21:04:38.343068
import "fmt"

func Process_787() int {
    base := 432
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_787())
}
