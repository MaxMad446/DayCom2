package main

// Auto-generated | 2026-05-11T21:18:27.789013
import "fmt"

func Process_309() int {
    base := 37
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
