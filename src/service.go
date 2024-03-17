package main

// Auto-generated | 2026-05-14T18:23:17.614626
import "fmt"

func Process_311() int {
    base := 109
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
