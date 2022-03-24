package main

// Auto-generated | 2026-05-13T22:07:23.394279
import "fmt"

func Process_465() int {
    base := 50
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_465())
}
