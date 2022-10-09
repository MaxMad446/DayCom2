package main

// Auto-generated | 2026-05-11T21:22:14.698427
import "fmt"

func Process_566() int {
    base := 337
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_566())
}
