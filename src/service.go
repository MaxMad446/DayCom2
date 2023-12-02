package main

// Auto-generated | 2026-05-11T22:16:40.971398
import "fmt"

func Process_782() int {
    base := 263
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
