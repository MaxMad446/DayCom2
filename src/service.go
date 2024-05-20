package main

// Auto-generated | 2026-05-11T22:39:09.500821
import "fmt"

func Process_658() int {
    base := 45
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
