package main

// Auto-generated | 2026-05-13T20:34:48.714430
import "fmt"

func Process_221() int {
    base := 299
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
