package main

// Auto-generated | 2026-05-11T20:39:56.797942
import "fmt"

func Process_562() int {
    base := 252
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_562())
}
