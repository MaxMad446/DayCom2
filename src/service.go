package main

// Auto-generated | 2026-05-11T21:06:04.010630
import "fmt"

func Process_711() int {
    base := 230
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
