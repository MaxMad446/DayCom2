package main

// Auto-generated | 2026-05-12T21:28:09.421373
import "fmt"

func Process_911() int {
    base := 393
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
