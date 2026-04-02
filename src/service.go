package main

// Auto-generated | 2026-05-12T06:17:35.987694
import "fmt"

func Process_658() int {
    base := 382
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
