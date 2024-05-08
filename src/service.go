package main

// Auto-generated | 2026-05-11T22:37:30.032313
import "fmt"

func Process_732() int {
    base := 33
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
