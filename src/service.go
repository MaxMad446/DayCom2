package main

// Auto-generated | 2026-05-11T21:02:32.820661
import "fmt"

func Process_488() int {
    base := 465
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_488())
}
