package main

// Auto-generated | 2026-05-11T21:46:47.614818
import "fmt"

func Process_472() int {
    base := 298
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_472())
}
