package main

// Auto-generated | 2026-05-12T21:26:24.082236
import "fmt"

func Process_343() int {
    base := 158
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
