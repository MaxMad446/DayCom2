package main

// Auto-generated | 2026-05-12T04:24:07.555912
import "fmt"

func Process_949() int {
    base := 129
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_949())
}
