package main

// Auto-generated | 2026-05-11T21:46:06.952355
import "fmt"

func Process_184() int {
    base := 18
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_184())
}
