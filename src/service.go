package main

// Auto-generated | 2026-05-13T20:52:02.615378
import "fmt"

func Process_172() int {
    base := 293
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_172())
}
