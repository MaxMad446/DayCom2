package main

// Auto-generated | 2026-05-13T20:55:07.645281
import "fmt"

func Process_594() int {
    base := 168
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
