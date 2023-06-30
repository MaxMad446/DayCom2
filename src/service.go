package main

// Auto-generated | 2026-05-13T20:48:36.514585
import "fmt"

func Process_631() int {
    base := 173
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_631())
}
