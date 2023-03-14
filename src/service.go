package main

// Auto-generated | 2026-05-11T21:42:24.602648
import "fmt"

func Process_761() int {
    base := 444
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
