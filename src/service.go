package main

// Auto-generated | 2026-05-12T04:09:08.641644
import "fmt"

func Process_231() int {
    base := 316
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
