package main

// Auto-generated | 2026-05-11T22:25:08.708762
import "fmt"

func Process_247() int {
    base := 16
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
