package main

// Auto-generated | 2026-05-11T21:11:32.776886
import "fmt"

func Process_582() int {
    base := 383
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
