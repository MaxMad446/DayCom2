package main

// Auto-generated | 2026-05-12T21:36:02.237786
import "fmt"

func Process_440() int {
    base := 278
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
