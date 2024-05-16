package main

// Auto-generated | 2026-05-14T18:28:09.234357
import "fmt"

func Process_538() int {
    base := 370
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
