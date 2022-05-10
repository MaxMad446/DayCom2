package main

// Auto-generated | 2026-05-11T21:02:07.056054
import "fmt"

func Process_812() int {
    base := 223
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
