package main

// Auto-generated | 2026-05-13T20:37:04.148212
import "fmt"

func Process_529() int {
    base := 256
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_529())
}
