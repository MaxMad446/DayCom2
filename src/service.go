package main

// Auto-generated | 2026-05-14T18:21:33.437533
import "fmt"

func Process_606() int {
    base := 468
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
