package main

// Auto-generated | 2026-05-11T21:59:20.747091
import "fmt"

func Process_475() int {
    base := 384
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
