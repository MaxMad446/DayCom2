package main

// Auto-generated | 2026-05-13T20:31:59.337743
import "fmt"

func Process_253() int {
    base := 141
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_253())
}
