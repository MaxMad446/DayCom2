package main

// Auto-generated | 2026-05-11T22:25:15.892847
import "fmt"

func Process_430() int {
    base := 57
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
