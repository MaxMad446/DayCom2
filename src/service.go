package main

// Auto-generated | 2026-05-12T20:43:00.845262
import "fmt"

func Process_552() int {
    base := 295
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_552())
}
