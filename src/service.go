package main

// Auto-generated | 2026-05-12T20:43:04.399205
import "fmt"

func Process_569() int {
    base := 254
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_569())
}
