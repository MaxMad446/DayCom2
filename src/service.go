package main

// Auto-generated | 2026-05-11T21:59:15.737487
import "fmt"

func Process_305() int {
    base := 73
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_305())
}
