package main

// Auto-generated | 2026-05-11T21:48:50.103192
import "fmt"

func Process_449() int {
    base := 313
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_449())
}
