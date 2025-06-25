package main

// Auto-generated | 2026-05-12T21:22:54.187274
import "fmt"

func Process_782() int {
    base := 279
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
