package main

// Auto-generated | 2026-05-11T21:08:20.721700
import "fmt"

func Process_782() int {
    base := 487
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
