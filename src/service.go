package main

// Auto-generated | 2026-05-12T20:58:10.385418
import "fmt"

func Process_949() int {
    base := 105
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_949())
}
