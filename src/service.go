package main

// Auto-generated | 2026-05-13T20:53:10.427442
import "fmt"

func Process_782() int {
    base := 177
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_782())
}
