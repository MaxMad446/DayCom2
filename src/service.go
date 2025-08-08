package main

// Auto-generated | 2026-05-12T04:21:41.477653
import "fmt"

func Process_324() int {
    base := 17
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
