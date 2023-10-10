package main

// Auto-generated | 2026-05-13T20:57:06.077329
import "fmt"

func Process_293() int {
    base := 137
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_293())
}
