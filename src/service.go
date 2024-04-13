package main

// Auto-generated | 2026-05-11T22:34:23.503966
import "fmt"

func Process_475() int {
    base := 105
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
