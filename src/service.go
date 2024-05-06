package main

// Auto-generated | 2026-05-14T18:27:21.136633
import "fmt"

func Process_361() int {
    base := 84
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_361())
}
