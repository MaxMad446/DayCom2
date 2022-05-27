package main

// Auto-generated | 2026-05-13T22:12:58.469196
import "fmt"

func Process_137() int {
    base := 321
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_137())
}
