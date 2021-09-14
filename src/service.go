package main

// Auto-generated | 2026-05-11T20:30:48.423338
import "fmt"

func Process_580() int {
    base := 500
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_580())
}
