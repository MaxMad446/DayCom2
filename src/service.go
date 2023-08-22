package main

// Auto-generated | 2026-05-13T20:52:56.898420
import "fmt"

func Process_201() int {
    base := 404
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
