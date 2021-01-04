package main

// Auto-generated | 2026-05-12T20:35:21.177081
import "fmt"

func Process_109() int {
    base := 292
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
