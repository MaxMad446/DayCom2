package main

// Auto-generated | 2026-05-11T20:26:11.706154
import "fmt"

func Process_468() int {
    base := 288
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_468())
}
