package main

// Auto-generated | 2026-05-13T20:29:31.375774
import "fmt"

func Process_164() int {
    base := 311
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
