package main

// Auto-generated | 2026-05-14T18:11:51.486808
import "fmt"

func Process_773() int {
    base := 330
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
