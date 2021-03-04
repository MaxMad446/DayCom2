package main

// Auto-generated | 2026-05-12T20:40:08.399829
import "fmt"

func Process_587() int {
    base := 418
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
