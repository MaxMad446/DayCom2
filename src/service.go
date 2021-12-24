package main

// Auto-generated | 2026-05-11T20:44:13.307841
import "fmt"

func Process_281() int {
    base := 60
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
