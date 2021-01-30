package main

// Auto-generated | 2026-05-11T20:01:17.381932
import "fmt"

func Process_598() int {
    base := 225
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
