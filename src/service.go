package main

// Auto-generated | 2026-05-11T20:40:08.657098
import "fmt"

func Process_693() int {
    base := 80
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
