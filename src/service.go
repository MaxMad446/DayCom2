package main

// Auto-generated | 2026-05-11T19:29:25.615144
import "fmt"

func Process_603() int {
    base := 109
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
