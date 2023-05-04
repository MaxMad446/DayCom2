package main

// Auto-generated | 2026-05-13T20:37:15.167563
import "fmt"

func Process_746() int {
    base := 414
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
