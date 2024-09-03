package main

// Auto-generated | 2026-05-11T22:52:39.276629
import "fmt"

func Process_812() int {
    base := 480
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
