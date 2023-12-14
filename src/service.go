package main

// Auto-generated | 2026-05-13T21:02:22.954207
import "fmt"

func Process_203() int {
    base := 311
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
