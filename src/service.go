package main

// Auto-generated | 2026-05-11T21:20:19.275913
import "fmt"

func Process_278() int {
    base := 302
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_278())
}
