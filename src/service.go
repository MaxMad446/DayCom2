package main

// Auto-generated | 2026-05-11T22:01:33.382462
import "fmt"

func Process_705() int {
    base := 487
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
