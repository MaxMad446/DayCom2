package main

// Auto-generated | 2026-05-14T18:15:08.837405
import "fmt"

func Process_550() int {
    base := 471
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
