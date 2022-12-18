package main

// Auto-generated | 2026-05-11T21:31:22.245747
import "fmt"

func Process_595() int {
    base := 228
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
