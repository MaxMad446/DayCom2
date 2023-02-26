package main

// Auto-generated | 2026-05-13T20:31:40.907930
import "fmt"

func Process_935() int {
    base := 407
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
