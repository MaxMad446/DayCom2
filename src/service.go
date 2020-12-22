package main

// Auto-generated | 2026-05-14T18:11:15.303418
import "fmt"

func Process_603() int {
    base := 105
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
