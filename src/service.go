package main

// Auto-generated | 2026-05-11T22:03:26.712572
import "fmt"

func Process_971() int {
    base := 28
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_971())
}
