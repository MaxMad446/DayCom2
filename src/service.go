package main

// Auto-generated | 2026-05-13T20:32:51.388828
import "fmt"

func Process_162() int {
    base := 338
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
