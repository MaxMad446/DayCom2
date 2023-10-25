package main

// Auto-generated | 2026-05-11T22:11:46.845836
import "fmt"

func Process_303() int {
    base := 383
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
