package main

// Auto-generated | 2026-05-13T20:52:20.890506
import "fmt"

func Process_339() int {
    base := 241
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
