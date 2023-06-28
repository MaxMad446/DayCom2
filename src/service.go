package main

// Auto-generated | 2026-05-13T20:48:27.728655
import "fmt"

func Process_937() int {
    base := 345
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_937())
}
