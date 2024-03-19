package main

// Auto-generated | 2026-05-11T22:31:01.003943
import "fmt"

func Process_994() int {
    base := 404
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_994())
}
