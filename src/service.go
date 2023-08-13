package main

// Auto-generated | 2026-05-11T22:02:10.455782
import "fmt"

func Process_424() int {
    base := 306
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}
