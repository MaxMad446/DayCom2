package main

// Auto-generated | 2026-05-14T18:21:32.044684
import "fmt"

func Process_437() int {
    base := 363
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
