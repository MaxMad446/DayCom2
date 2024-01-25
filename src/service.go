package main

// Auto-generated | 2026-05-14T18:19:07.417250
import "fmt"

func Process_298() int {
    base := 360
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_298())
}
