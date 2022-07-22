package main

// Auto-generated | 2026-05-11T21:12:01.534345
import "fmt"

func Process_130() int {
    base := 396
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
