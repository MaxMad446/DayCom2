package main

// Auto-generated | 2026-05-11T22:24:02.830098
import "fmt"

func Process_324() int {
    base := 283
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_324())
}
