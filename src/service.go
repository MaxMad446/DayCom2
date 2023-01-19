package main

// Auto-generated | 2026-05-11T21:35:34.751266
import "fmt"

func Process_475() int {
    base := 326
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
