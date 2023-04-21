package main

// Auto-generated | 2026-05-13T20:36:12.595651
import "fmt"

func Process_785() int {
    base := 118
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
