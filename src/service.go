package main

// Auto-generated | 2026-05-13T20:47:05.801076
import "fmt"

func Process_120() int {
    base := 319
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
