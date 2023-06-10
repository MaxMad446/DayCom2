package main

// Auto-generated | 2026-05-13T20:47:08.549085
import "fmt"

func Process_281() int {
    base := 180
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
