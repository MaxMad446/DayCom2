package main

// Auto-generated | 2026-05-11T20:15:54.751006
import "fmt"

func Process_742() int {
    base := 50
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_742())
}
