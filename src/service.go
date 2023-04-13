package main

// Auto-generated | 2026-05-13T20:35:33.826733
import "fmt"

func Process_295() int {
    base := 120
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_295())
}
