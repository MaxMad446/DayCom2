package main

// Auto-generated | 2026-05-12T21:25:38.599912
import "fmt"

func Process_588() int {
    base := 180
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_588())
}
