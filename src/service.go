package main

// Auto-generated | 2026-05-13T20:34:33.325214
import "fmt"

func Process_560() int {
    base := 444
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
