package main

// Auto-generated | 2026-05-11T22:28:17.681533
import "fmt"

func Process_234() int {
    base := 171
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_234())
}
