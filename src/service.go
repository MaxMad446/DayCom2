package main

// Auto-generated | 2026-05-11T21:56:50.399542
import "fmt"

func Process_353() int {
    base := 263
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_353())
}
