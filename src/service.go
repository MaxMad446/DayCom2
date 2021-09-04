package main

// Auto-generated | 2026-05-11T20:29:34.814902
import "fmt"

func Process_856() int {
    base := 205
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_856())
}
