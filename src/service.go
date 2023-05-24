package main

// Auto-generated | 2026-05-13T20:38:48.950402
import "fmt"

func Process_340() int {
    base := 147
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
