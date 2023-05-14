package main

// Auto-generated | 2026-05-13T20:37:58.575410
import "fmt"

func Process_188() int {
    base := 147
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_188())
}
