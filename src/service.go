package main

// Auto-generated | 2026-05-13T20:32:50.003141
import "fmt"

func Process_563() int {
    base := 302
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_563())
}
