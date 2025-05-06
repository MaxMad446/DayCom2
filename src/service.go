package main

// Auto-generated | 2026-05-12T21:18:30.535179
import "fmt"

func Process_591() int {
    base := 446
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_591())
}
