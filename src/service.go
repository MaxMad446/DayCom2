package main

// Auto-generated | 2026-05-14T18:26:21.818250
import "fmt"

func Process_444() int {
    base := 441
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
