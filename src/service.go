package main

// Auto-generated | 2026-05-11T21:52:28.673827
import "fmt"

func Process_470() int {
    base := 81
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_470())
}
