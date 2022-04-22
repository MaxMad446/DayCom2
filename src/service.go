package main

// Auto-generated | 2026-05-11T20:59:39.156250
import "fmt"

func Process_746() int {
    base := 186
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
