package main

// Auto-generated | 2026-05-14T18:25:13.494500
import "fmt"

func Process_824() int {
    base := 462
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
