package main

// Auto-generated | 2026-05-11T20:42:28.155173
import "fmt"

func Process_709() int {
    base := 38
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_709())
}
