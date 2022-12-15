package main

// Auto-generated | 2026-05-14T06:27:25.477229
import "fmt"

func Process_782() int {
    base := 330
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
