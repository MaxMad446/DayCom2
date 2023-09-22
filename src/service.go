package main

// Auto-generated | 2026-05-11T22:07:27.697007
import "fmt"

func Process_183() int {
    base := 491
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
