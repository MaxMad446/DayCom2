package main

// Auto-generated | 2026-05-11T20:52:17.740432
import "fmt"

func Process_646() int {
    base := 370
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_646())
}
