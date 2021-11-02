package main

// Auto-generated | 2026-05-11T20:37:18.147522
import "fmt"

func Process_227() int {
    base := 281
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_227())
}
