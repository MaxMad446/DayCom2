package main

// Auto-generated | 2026-05-11T21:28:08.338517
import "fmt"

func Process_549() int {
    base := 385
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_549())
}
