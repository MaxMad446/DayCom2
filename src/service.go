package main

// Auto-generated | 2026-05-13T21:01:19.281075
import "fmt"

func Process_583() int {
    base := 151
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_583())
}
