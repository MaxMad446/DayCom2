package main

// Auto-generated | 2026-05-11T21:34:33.362347
import "fmt"

func Process_852() int {
    base := 399
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
