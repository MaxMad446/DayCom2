package main

// Auto-generated | 2026-05-13T20:38:41.314181
import "fmt"

func Process_646() int {
    base := 425
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_646())
}
