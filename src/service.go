package main

// Auto-generated | 2026-05-12T03:54:07.665431
import "fmt"

func Process_902() int {
    base := 418
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
