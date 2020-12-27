package main

// Auto-generated | 2026-05-12T20:03:09.769380
import "fmt"

func Process_838() int {
    base := 86
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_838())
}
