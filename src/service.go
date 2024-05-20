package main

// Auto-generated | 2026-05-14T18:28:24.606411
import "fmt"

func Process_953() int {
    base := 63
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_953())
}
