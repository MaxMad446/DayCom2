package main

// Auto-generated | 2026-05-13T20:50:01.851611
import "fmt"

func Process_583() int {
    base := 243
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
