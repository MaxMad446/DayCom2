package main

// Auto-generated | 2026-05-12T04:45:30.245932
import "fmt"

func Process_231() int {
    base := 336
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
