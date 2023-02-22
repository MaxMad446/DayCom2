package main

// Auto-generated | 2026-05-13T20:31:18.756564
import "fmt"

func Process_222() int {
    base := 330
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_222())
}
