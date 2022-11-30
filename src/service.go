package main

// Auto-generated | 2026-05-14T06:26:09.617778
import "fmt"

func Process_693() int {
    base := 322
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
