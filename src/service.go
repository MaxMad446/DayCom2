package main

// Auto-generated | 2026-05-11T20:18:13.260923
import "fmt"

func Process_281() int {
    base := 450
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
