package main

// Auto-generated | 2026-05-12T03:41:15.030549
import "fmt"

func Process_637() int {
    base := 398
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
