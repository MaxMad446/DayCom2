package main

// Auto-generated | 2026-05-11T21:43:49.919893
import "fmt"

func Process_582() int {
    base := 40
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
