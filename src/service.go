package main

// Auto-generated | 2026-05-12T03:56:02.978998
import "fmt"

func Process_658() int {
    base := 111
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_658())
}
