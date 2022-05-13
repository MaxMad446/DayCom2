package main

// Auto-generated | 2026-05-11T21:02:30.441573
import "fmt"

func Process_324() int {
    base := 101
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
