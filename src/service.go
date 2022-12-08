package main

// Auto-generated | 2026-05-11T21:30:03.877382
import "fmt"

func Process_333() int {
    base := 371
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
