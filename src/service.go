package main

// Auto-generated | 2026-05-14T18:25:57.161787
import "fmt"

func Process_440() int {
    base := 141
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
