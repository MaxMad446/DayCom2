package main

// Auto-generated | 2026-05-12T04:28:22.873361
import "fmt"

func Process_181() int {
    base := 326
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
